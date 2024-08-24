#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
   string s;
   cin>>s;

   string temp;
   bool first=false;
   bool sec=false;

   for(int i=0;i<s.length()-2;i++){
    if(s[i]=='o'&& s[i+1]=='g' && s[i+2]=='o'){
        s[i]='*';
        s[i+1]='*';
        s[i+2]='*';
        i+=1;

        first=true;

        // cout<<s<<endl;
        // continue;
       
    }
    else if(s[i]=='*' &&  s[i+1]=='g' && s[i+2]=='o'){
         s[i]='*';
        s[i+1]='*';
        s[i+2]='*';
        i+=1;

        sec=true;

    }
    if(i>=n){
        break;    }

   }
   if(!sec){
    cout<<s<<endl;
    return;
   }

{
   int ast=0;

   for(int i=0; i<s.length();i++){

    if( ast<3 && s[i]=='*' ){
        temp.push_back(s[i]);
        ast++;
    }

    else if(s[i]!='*'){
        temp.push_back(s[i]);
        ast=0;

    }
    // cout<<temp<<endl;
    // cout<<ast<<endl;
   }

   cout<<temp<<endl;


   
}

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}