#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int x=0;
   
    vector<int> arr(n);
    int y=INT_MAX;
    for (int i = 0; i < n; i++) {

        cin >> arr[i];
        x=x|arr[i];
        y=y&arr[i];
    }



    cout<<x-y<<endl;

   
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