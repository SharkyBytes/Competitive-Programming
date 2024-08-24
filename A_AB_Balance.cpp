#include<bits/stdc++.h>

using namespace std;

void solve() {
   string s;
   cin>>s;
   int n=s.length();
//    int count=0;


//    for(int i=0; i<n-1;i++){
//     if(s[i]=='a' && s[i+1]=='b'){
//         count++;
//     }

//    }
// //    cout<<count<<endl;
//    int count2=0;


//    for(int i=0; i<n-1;i++){
//     if(s[i]=='b' && s[i+1]=='a'){
//         count2++;
//     }

//    }
// //    cout<<count2<<endl;

// int diff=abs(count-count2);
//  if(diff==0){
//     cout<<s<<endl;
        
//     }
//     else{
// if(count>count2){
//   if(s[0]=='a' && s[1]=='b'){
//     s[0]='b';
//     diff--;
//   }
//     while (diff!=0){
//         for(int i=1; i<n-1;i++){
//              if(s[i-1]=='b' && s[i]=='a' && s[i+1]=='b'){
//                 s[i+1]='a';
//              }
//         }

// diff--;

//     }
// }

//     else{
//          if(s[0]=='b' && s[1]=='a'){
//     diff--;
//   }
//     while (diff!=0){
//         for(int i=1; i<n-1;i++){
//              if(s[i-1]=='b' && s[i]=='b' && s[i+1]=='a'){
//                 s[i-1]='a';
//              }
//         }

// diff--;

//     }

//     }

   

//     if(diff==0){
//     cout<<s<<endl;
        
//     }
//     }

if(s[0]!=s[n-1]){
    s[0]=s[n-1];
}

cout<<s<<endl;
    
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
