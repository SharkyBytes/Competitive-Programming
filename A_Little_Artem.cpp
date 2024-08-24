#include<bits/stdc++.h>

using namespace std;

void solve() {
   int r,c;
   cin>>r>>c;
int i=0;
   for(i=0;i<r*c;i++){
    if(i%c==0 && i!=0){
        cout<<endl;
    }
    if(i==0){
        cout<<'W';
    }
    else{
        cout<<'B';
    }
   }

// if(r*c%2==0){
// if(i%2==0){
//      cout<<'W';   
// }
//  else{
//         cout<<'B';
//  }

//     }
//  else{
//         cout<<'B';
//  }
   cout<<endl;
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