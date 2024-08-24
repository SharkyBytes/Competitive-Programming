#include<bits/stdc++.h>

using namespace std;

void solve() {
   int n;
   cin>>n;

   if(n==0){
    cout<<1<<endl;
    return;
   }

   int arr[4]={8,4,2,6};

   int x=(n-1)%4;

   cout<<arr[x]<<endl;




   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}