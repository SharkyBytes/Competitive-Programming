#include<bits/stdc++.h>

using namespace std;

void solve() {
   
   string s;
   cin>>s;

   string letter="abcdefgh";
   string num="12345678";

   for(int i=0; i<letter.length();i++){

    if(letter[i]==s[0]){
        continue;
    }
    else{
        cout<<letter[i]<<s[1]<<endl;
    }

   }
   for(int i=0; i<num.length();i++){

    if(num[i]==s[1]){
        continue;
    }
    else{
        cout<<s[0]<<num[i]<<endl;
    }

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