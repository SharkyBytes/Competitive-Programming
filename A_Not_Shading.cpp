#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
   int m;
   cin>>m;

   int l,r;
   cin>>l>>r;
   char arr[n][m];
   int count=0;
   for(int i=0; i<n;i++){
    for(int j=0; j<m;j++){
        cin>>arr[i][j];

        if(arr[i][j]=='W'){
            count++;
        }

    }

   }
   if(arr[l-1][r-1]=='B'){
    cout<<0<<endl;
    return;
   }
// cout<<count<<endl;
   if(count==n*m){
    cout<<-1<<endl;
    return;
   }

  else{
 for(int i=0;i<m;i++){
    if(arr[l-1][i]=='B'){
        cout<<1<<endl;
        return;
    }
 
 }
 for(int i=0;i<n;i++){
    if(arr[i][r-1]=='B'){
        cout<<1<<endl;
        return;
    }
 
 }
 cout<<2<<endl;
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