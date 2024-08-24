#include<bits/stdc++.h>

using namespace std;

void solve() {
   int arr[4];
   int n=4;

   for(int i=0; i<n;i++){
    cin>>arr[i];
   }

   string s;
   cin>>s;
int sum=0;
   for(int i=0; i<s.length();i++){

    int x=s[i]-'0';

    sum+=arr[x-1];
    
   }

   cout<<sum<<endl;

   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

   solve();

    return 0;
}