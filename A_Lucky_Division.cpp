#include<bits/stdc++.h>

using namespace std;

void solve() {
   

   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
   string s=to_string(n);

   bool he=true;

   for(int i=0; i<s.length();i++){

    if(s[i]!='4' && s[i]!='7'){
        he=false;
    }

   }

   if(he){
    cout<<"YES"<<endl;
    return 0;

   }

   else{

   if(n%4==0 || n%7==0 || n%44==0|| n%47==0 || n%74==0 ||n%77==0 || n%444==0 || n%447==0 || n%474==0 || n%744==0 || n%477==0 || n%747==0 || n%774==0 || n%777==0    ){
     cout<<"YES"<<endl;
    return 0;
   }
   }
 cout<<"NO"<<endl;


    return 0;
}