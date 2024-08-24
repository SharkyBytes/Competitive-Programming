#include<bits/stdc++.h>

using namespace std;
#define ll long long

void solve() {
   ll x,y,k;
   cin>>x>>y>>k;

  ll coal=k;
  ll sticks=coal*y;
  sticks+=k;
  sticks--;

  ll trade=sticks/(x-1);
  ll bacha=sticks%(x-1);

  if(bacha){
    trade++;
  }
  cout<<trade+k<<endl;









   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}