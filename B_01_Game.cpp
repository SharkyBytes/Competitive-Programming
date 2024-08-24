#include<bits/stdc++.h>

using namespace std;

void solve() {
   string s;
   cin>>s;

   int zero=0;
   int one=0;

   for(int i=0; i<s.length();i++){
    if(s[i]=='0'){
        zero++;
    }
    else if(s[i]=='1'){
        one++;
    }
   }

   int ans=min(one,zero);

   if(ans%2!=0){
    cout<<"DA"<<endl;
   }

   else{
    cout<<"NET"<<endl;
   }


   
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