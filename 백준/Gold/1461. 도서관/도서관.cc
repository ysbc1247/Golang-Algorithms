#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(),v.end()
using ll = long long;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; cin >> n >> m;
    vector<int>v(n);
    int ms = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] < 0) {
            ms++;
        }
    }
    sort(all(v));
    int mx = n - ms;
    int res = 0;
    int a = ms / m;
    if (a * m != ms) {
        a++;
    }
    int b = mx / m;
    if (b * m != mx) {
        b++;
    }
    int k = 0;
    while (a--) {
        res -= 2 * v[k];
        k += m;
    }
    k = n - 1;
    while (b--) {
        res += 2 * v[k];
        k -= m;
    }
    cout << res-max(-v[0],v[n-1]);
}
// -39 -37 -29 -28 2 11

// 78 58 22