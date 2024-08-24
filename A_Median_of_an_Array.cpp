#include<bits/stdc++.h>

using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
  
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++) 
        cin >> arr[i];

sort(arr.begin(),arr.end());
ll m=ceil(float(n)/2);

// cout<<m<<endl;
ll x=arr[m-1];
ll cnt=0;
for(ll i=m-1; i<n;i++){
    if(arr[i]==x){
        cnt++;
    }
    else{
        break;
    }

}
cout<<cnt<<endl;fas

   
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}