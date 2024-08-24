#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n;
    cin >> n;
   
   if(n&1){
    cout<<"YES"<<endl;
   }

   else{
    while(n%2==0){
        n/=2;
    }
   if(n>1 && n&1){
    cout<<"YES"<<endl;
   }

   else{
    cout<<"NO"<<endl;
   }

   }

//    cout<<n<<endl;


   
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