#include<bits/stdc++.h>

using namespace std;

#define ll              long long
bool isPrime(int n)
{
      // Since 0 and 1 is not 
      // prime return false.
      if(n == 1 || n == 0) return false;
   
      // Run a loop from 2 to n-1
      for(int i = 2; i < n; i++)
      {
        // if the number is divisible by i, 
        // then n is not a prime number.
        if(n % i == 0) return false;
      }
      // Otherwise n is a prime number.
      return true;
}
void solve() {
    ll x;
    cin >> x;
    ll y;
    cin>>y;

    ll temp=x-y;
    // cout<<temp<<endl;

   for(ll i=0;i<100;i++){
    if(isPrime(i)){
        if(temp%i==0){
            cout<<"YES"<<endl;
            return;
        }
    }
   }

   cout<<"NO"<<endl;



   
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

