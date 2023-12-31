#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(),v.end()
using ll = long long;

double dis(pair<double, double> a, pair<double, double>b) {
    return pow(pow(a.first - b.first, 2) + pow(a.second - b.second, 2),0.5);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    double V, m; cin >> V >> m;
    double r = V * 60 * m;
    double x, y, a, b; cin >> x >> y >> a >> b;
    vector<pair<double, double>>v;
    v.push_back({ x,y });
    string s;
    getline(cin, s);
    while (1) {
        getline(cin, s);
        if (s.empty()) break;
        istringstream iss(s);
        double q, w;
        if (iss >> q >> w) {
            v.push_back({ q,w });
        }
    }
    v.push_back({ a,b });
    vector<int>av[1005];
    for (int i = 0; i < v.size(); i++) {
        for (int k = 0; k < v.size(); k++) {
            if (i != k) {
                if (dis(v[i], v[k]) <= r) {
                    av[i].push_back(k);
                }
            }
        }
    }
    int res = 0;
    queue<int>q;
    vector<bool>vis(v.size(),0);
    vis[0] = 1;
    for (auto i : av[0]) {
        q.push(i);
        vis[i] = 1;
    }
    while (!q.empty()) {
        int sz = q.size();
        for (int i = 0; i < sz; i++) {
            if (q.front() == v.size() - 1) {
                cout << "Yes, visiting " << res << " other holes."; return 0;
            }
            for (auto k : av[q.front()]) {
                if (!vis[k]) {
                    q.push(k);
                    vis[k] = 1;
                }
            }
            q.pop();
        }
        res++;
    }
    cout << "No.";
}