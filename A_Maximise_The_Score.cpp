#include<bits/stdc++.h>

using namespace std;

void solve() {
    int x;
    cin >> x;
    int n=2*x;
 
    vector<int> arr(n);
    for (int i = 0; i < n; i++) 
        cin >> arr[i];
    sort(arr.begin(),arr.end());
 int sum=0;


    for(int i=0; i<n;i+=2){
        sum+=arr[i];
        
    }

    cout<<sum<<endl;


   
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