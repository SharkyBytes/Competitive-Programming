#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n,m;
    cin>>n>>m;

    if(m&1){
        m-=1;
    }

    long long ans=0;

    ans+=m/2;

    ans*=n;

    cout<<ans<<endl;


   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}