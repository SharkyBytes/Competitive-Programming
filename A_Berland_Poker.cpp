#include<bits/stdc++.h>

using namespace std;

void solve() {
  int n,m,k;
  cin>>n>>m>>k;

  int cards=n/k;

  int first=min(cards,m);

  m-=first;
  k--;
//   cout<<k<<endl;

   int  div =ceil((double)m/(k));


// cout<<div<<endl;

cout<<first-div<<endl;




   
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