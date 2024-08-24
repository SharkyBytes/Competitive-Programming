#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
   int x=0;
 int temp=2;
 int div=pow(2,temp)-1;
//  cout<<div;
 while(n%div!=0){
     div=pow(2,temp)-1;
    temp++;
 }
 if(n%div==0){
cout<<n/div<<endl;
 }


// cout<<x<<endl;

   
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