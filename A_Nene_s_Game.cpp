#include<bits/stdc++.h>

using namespace std;
#define ll long long

void solve() {
   int k,q;
   cin>>k>>q;
   vector<int> arr(k);
   for(int i=0; i<k;i++){
    cin>>arr[i];
   }
  while(q--){
    int n;
    cin>>n;
    if(n<arr[0]){
        cout<<n<<" ";
       
    }
    else{
        cout<<arr[0]-1<<" ";
    }
  }
cout<<endl;

   
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