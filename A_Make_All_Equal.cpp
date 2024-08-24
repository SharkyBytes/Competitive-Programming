#include<bits/stdc++.h>

using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;
   map<int,int> mp;

    vector<int> arr(n);
    int mini=INT_MIN;

    for(int i=0; i<n  ; i++){
        cin>>arr[i];
        mp[arr[i]]++;
        mini=max(mp[arr[i]],mini);

    }
    cout<<n-mini<<endl;

   
   
   
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