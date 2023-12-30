#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(),v.end()
using ll = long long;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    map<ll, ll>mp;
    for (int i = 0; i < n; i++) {
        ll a; cin >> a;
        mp[a]++;
    }
    ll ans = 0;
    for (auto i : mp) {
        for (auto k : mp) {
            if (!i.first && !k.first) {
                if (i.second > 2) {
                    ans += i.second;
                    break;
                }
            }
            else if (!k.first) {
                if (i.second > 1) {
                    ans += i.second;
                    break;
                }
            }
            else if (i.first == k.first * 2) {
                if (k.second > 1) {
                    ans += i.second;
                    break;
                }
            }
            else if (i.first == k.first) {
                if (i.second > 1) {
                    if (mp.find(0) != mp.end()) {
                        ans += i.second; break;
                    }
                }
            }
            else if (mp.find(i.first - k.first) != mp.end()) {
                ans += i.second; break;
            }
        }
    }
    cout << ans;
}