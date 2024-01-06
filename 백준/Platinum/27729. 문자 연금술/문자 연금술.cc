#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(v) v.begin(), v.end()

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll n,m; cin>>n>>m;
    if(n==2&&m==3){
        cout<<8<<'\n';
        cout<<"baabb"; return 0;
    }
    if(n==3&&m==2){
        cout<<8<<'\n';
        cout<<"abbaa"; return 0;
    }
    if(n==m && n<=3){
        cout<<((n+m)*(n+m-1))/2 - n<<'\n';
        cout<<'b';
        for(int i=0; i<n; i++){
            cout<<'a';
        }
        for(int i=0; i<n-1; i++){
            cout<<'b';
        }
        return 0;
    }
    if(n+m==3){
        cout<<2<<'\n';
    }
    else cout<<((n+m)*(n+m-1))/2<<'\n';
    if(n>m){
        cout<<"aba";
        for(int i=0; i<m-1; i++){
            cout<<'b';
        }
        for(int i=0; i<n-2; i++){
            cout<<'a';
        }
    }
    else{
        cout<<"bab";
        for(int i=0; i<n-1; i++){
            cout<<'a';
        }
        for(int i=0; i<m-2; i++){
            cout<<'b';
        }
    }
}
/*
 * babaaabb
 */