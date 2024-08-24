#include<bits/stdc++.h>

using namespace std;
#define ll long long

void solve() {
    int n,m,k;
    cin>>n>>m>>k;

    int bada=ceil(float(n)/m);

    if(n-bada>k){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    return;   
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}