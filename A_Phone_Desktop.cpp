#include<bits/stdc++.h>

using namespace std;
#define ll long long

void solve() {
  int x,y;
  cin>>x>>y;

  int ans=0;
  while(y>0){
    if(y>1){
        y-=2;
        x-=7;
     
        ans++;

    }
    else{
        y-=1;
        x-=11;
       
        ans++;
    }
  }
  if(x>0){
    ans+=(x/15);
    if(x%15!=0){
        ans++;
    }
  }
  cout<<ans<<endl;


   
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