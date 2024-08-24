#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int msb = log2(n);
        cout<<((1<<msb) - 1)<<endl;


   
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