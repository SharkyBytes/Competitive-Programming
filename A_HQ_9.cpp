#include<bits/stdc++.h>

using namespace std;

void solve() {
 

   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

      string s;
    cin>>s;
   bool count = false;
    for (int i = 0; i < s.length(); i++) {
        if(s[i]=='H' || s[i]=='Q'|| s[i]=='9' ){

            count=true;
        }
    }
    
    if(count==true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}