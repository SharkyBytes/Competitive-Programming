#include<bits/stdc++.h>

using namespace std;
#define ll long long
void solve() {
 ll a,b,c,d;
 cin>>a>>b>>c>>d;

ll mini=min(min(a,b),c);

a-=mini;
b-=mini;
c-=mini;

d+=3*mini;

 

 ll odd=0;
 if(a%2!=0){
    odd++;
 }
 if(b%2!=0){
    odd++;
 }
 if(c%2!=0){
    odd++;
 }
 if(d%2!=0){
    odd++;
 }

// cout<<odd<<endl;
if(odd>1){
    cout<<"NO"<<endl;
}

else{
    cout<<"YES"<<endl;
}

   
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