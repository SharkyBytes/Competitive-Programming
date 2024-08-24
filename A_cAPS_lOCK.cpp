#include<bits/stdc++.h>

using namespace std;

void solve() {



   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

     string s;
   cin>>s;

   bool all =true;

   for(int i=1;i<s.length();i++){

    if(s[i]<'A' || s[i]>'Z'){
        all =false;
    }

   }

  bool first=false;
if(s[0]>='a' && s[0]<='z'){
        first=true;
    }
 

  if(all){

    if(first){
        s[0]-=32;
    }
    else{
        s[0]+=32;
    }
    
    
    for(int i=1;i<s.length();i++){

   s[i]+=32;

   }
  }
cout<<s<<endl;

    return 0;
}