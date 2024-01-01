#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(),v.end()
using ll = long long;

struct st {
    int a, b;
};
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int mn = 1e9;
    vector<st>v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].a >> v[i].b;
    }
    int ans;
    if (n == 1) {
        cout << 0 << '\n';
        cout << v[0].a; return 0;
    }
    for(int i=v[0].a; i<=v[0].b; i++){
        int t = i;
        int mx = 0;
        for (int k = 1; k < n; k++) {
            if (t <= v[k].b && t >= v[k].a) {
                continue;
            }
            else if (t > v[k].b) {
                mx += t - v[k].b;
                t = v[k].b;
            }
            else {
                mx += v[k].a - t;
                t = v[k].a;
            }
        }
        if (mx < mn) {
            mn = mx;
            ans = i;
        }
    }
    int t = ans;
    cout << mn << '\n';
    cout << ans << '\n';
    for (int k = 1; k < n; k++) {
        if (t <= v[k].b && t >= v[k].a) {
            t = t;
        }
        else if (t > v[k].b) {
            t = v[k].b;
            
        }
        else {
            t = v[k].a;
        }
        cout << t << '\n';
    }
}