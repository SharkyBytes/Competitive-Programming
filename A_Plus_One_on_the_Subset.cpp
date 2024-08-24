#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
 
    vector<int> arr(n);
    int mini=INT_MAX;
    int maxi=INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];

       mini=min(arr[i],mini);
       maxi=max(arr[i],maxi);



    }

    cout<<maxi-mini<<endl;
   
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