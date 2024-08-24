#include<bits/stdc++.h>

using namespace std;
#define ll long long

void solve() {
   ll x, y, a, b;

    cin >> x >> y >> a >> b;

    if (2 * a <= b) {
        // If it's cheaper to perform individual operations
        cout << (x + y) * a << endl;
    } else {
        // If it's cheaper to perform both operations together
        ll common = min(x, y);
        ll cost = common * b + (abs(x - y) * a);
        cout << cost << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}