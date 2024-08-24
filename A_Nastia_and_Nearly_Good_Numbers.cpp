#include <bits/stdc++.h>

using namespace std;
#define ll long long
void solve()
{
    ll a, b;
    cin >> a >> b;

    if (b == 1)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;

    cout << a << " " << a * (b) << " " << a * (b + 1) << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}