#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(),v.end()
using ll = long long;

vector<vector<pair<ll, ll>>> adjA, adjB;
vector<ll> subtreeSize;
vector<long long> distSum;

void firstDFS(ll node, ll parent, vector<vector<pair<ll, ll>>>& adj) {
    subtreeSize[node] = 1;
    for (auto& child : adj[node]) {
        if (child.first != parent) {
            firstDFS(child.first, node, adj);
            subtreeSize[node] += subtreeSize[child.first];
            distSum[node] += distSum[child.first] + subtreeSize[child.first] * child.second;
        }
    }
}

void secondDFS(ll node, ll parent, long long totalDist, vector<vector<pair<ll, ll>>>& adj) {
    distSum[node] = totalDist;
    for (auto& child : adj[node]) {
        if (child.first != parent) {
            long long childDist = totalDist - (subtreeSize[child.first] * child.second) + (subtreeSize.size() - subtreeSize[child.first]) * child.second;
            secondDFS(child.first, node, childDist, adj);
        }
    }
}

pair<ll,ll> findMinVertex(vector<vector<pair<ll, ll>>>& adj) {
    ll n = adj.size();
    if (n == 1) {
        return { 1,0 };
    }
    subtreeSize.assign(n, 0);
    distSum.assign(n, 0);

    firstDFS(0, -1, adj);
    secondDFS(0, -1, distSum[0], adj);

    ll minVertex = 0;
    for (ll i = 1; i < n; ++i) {
        if (distSum[i] < distSum[minVertex]) {
            minVertex = i;
        }
    }
    return { minVertex + 1, distSum[minVertex] };
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,m;
    cin >> n;
    adjA.resize(n);
    for (ll i = 0; i < n - 1; ++i) {
        ll u, v, w;
        cin >> u >> v >> w;
        --u; --v;
        adjA[u].emplace_back(v, w);
        adjA[v].emplace_back(u, w);
    }
    cin >> m;
    adjB.resize(m);
    for (ll i = 0; i < m - 1; ++i) {
        ll u, v, w;
        cin >> u >> v >> w;
        --u; --v;
        adjB[u].emplace_back(v, w);
        adjB[v].emplace_back(u, w);
    }
    pair<ll, ll>resa = findMinVertex(adjA), resb = findMinVertex(adjB);
    cout << resa.first << ' ' << resb.first << '\n';
    cout << n * resb.second + m * resa.second + n * m;
}
/*
x+
a b c d e
q w e r t
a+1+q a+ 
왼쪽노드개수 * 오른쪽전체합 + 오른쪽노드개수 * 왼쪽전체합 + 왼쪽노드개수*오른쪽노드개수

**/