#include<bits/stdc++.h>

using namespace std;

void solve() {
   int b,g;
   cin>>b>>g;
string s;
if(b>=g){
   for(int i=0; i<min(b,g);i++){

    s.push_back('B');
    s.push_back('G');

   }

   int diff=max(b,g)-min(b,g);

   for(int i=0 ;i<diff;i++){
    if(b>g){
        s.push_back('B');

    }
    else{
        s.push_back('G');
    }
   }

   cout<<s<<endl;
   
}

else{

     for(int i=0; i<min(b,g);i++){
    s.push_back('G');
    s.push_back('B');


   }

   int diff=max(b,g)-min(b,g);

   for(int i=0 ;i<diff;i++){
    if(b>g){
        s.push_back('B');

    }
    else{
        s.push_back('G');
    }
   }

   cout<<s<<endl;


}
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    solve();
    return 0;
}