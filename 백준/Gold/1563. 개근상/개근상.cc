#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(),v.end()
using ll = long long;

int mod = 1e6;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[1005][2][3] = {};
    int n; cin >> n;
    arr[0][0][0] = arr[0][1][0] = arr[0][0][1] = 1;
    for (int i = 1; i < n; i++) {
        arr[i][0][0] = arr[i - 1][0][0] + arr[i - 1][0][1] + arr[i - 1][0][2];
        arr[i][0][1] = arr[i - 1][0][0];
        arr[i][0][2] = arr[i - 1][0][1];
        arr[i][1][0] = arr[i - 1][0][0] + arr[i - 1][1][0] + arr[i - 1][1][1] + arr[i - 1][1][2] + arr[i - 1][0][1] + arr[i - 1][0][2];
        arr[i][1][1] = arr[i - 1][1][0];
        arr[i][1][2] = arr[i - 1][1][1];
        for (int k = 0; k < 2; k++) {
            for (int j = 0; j < 3; j++) {
                arr[i][k][j] %= mod;
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < 2; i++) {
        for (int k = 0; k < 3; k++) {
            ans += arr[n - 1][i][k];
        }
    }
    cout << ans%mod;
}
/*
0 ,0

*/