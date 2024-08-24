#include<bits/stdc++.h>

using namespace std;

void solve() {
   string a,b;
   cin>>a>>b;

   int maxi=-1;

   if(a.length()!=b.length()){
    maxi=max(a.length(),b.length());
    cout<<maxi<<endl;
    return;
   }

   else{

  if(a==b){
    cout<<-1<<endl;
  }

  else{
    cout<<a.length()<<endl;
  }
   }



   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

  solve();

    return 0;
}