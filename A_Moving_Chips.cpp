#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
  
    vector<int> arr(n);
    for (int i = 0; i < n; i++) 
        cin >> arr[i];

    int first=-1;
    int last=-1;

    for(int i=0; i<n;i++){
        if(arr[i]==1){
            first=i;
            break;

        }
    }
   for(int i=n-1; i>=0;i--){
    if(arr[i]==1){
            last=i;
            break;

        }

   }

   int count=0;

for(int i=first; i<last;i++){

    if(arr[i]==0){
        count++;
    }

}

cout<<count<<endl;

   
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