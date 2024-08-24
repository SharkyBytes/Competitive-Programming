#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int t;
    cin>>t;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) 
        cin >> arr[i];

int maxi=0;
int index=-1;

for(int i=0; i<n;i++){
    arr[i]=ceil(double(arr[i])/t);
}


for(int i=0; i<n;i++){
    
  int ans=arr[i];
    if(ans>=maxi){
        maxi=ans;
        index=i;
    }
}
   
   cout<<index+1<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
solve();

    return 0;
}