#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
 
    vector<int> arr(n);
    for (int i = 0; i < n; i++) 
        cin >> arr[i];

int temp[n];
int ans[n];

for(int i=0; i<n;i++){

     for(int j=0;j<n;j++){
        temp[j]=arr[j];
 }

//  cout<<temp[n-1]<<endl;

int count=1;
    while(i+1!=temp[i]){
        swap(temp[i],temp[temp[i]-1]);
        count++;
    }
    ans[i]=count;


}
for(int i=0; i<n;i++){
   cout<<ans[i]<<" ";
}
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