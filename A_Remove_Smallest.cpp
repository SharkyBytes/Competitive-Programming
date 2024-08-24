#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Sort the array in ascending order
    sort(a.begin(), a.end());

    // Check if the absolute difference between any two adjacent elements is no more than one
    for (int i = 1; i < n; i++) {
        if (a[i] - a[i - 1] > 1) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
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
