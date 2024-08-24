#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
   
   
    vector<int> arr(n);

    int y=INT_MAX;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        y&=arr[i];


    }

    cout<<y<<endl;
   
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