#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;

    if (a % 2 != 0 && b % 2 != 0)
    {
        cout << "No" << endl;
        return;
    }

    if (a < b)
    {
        swap(a, b);
    }
    if (a % 2 == 0 && b % 2 == 0)
    {
        if ((a / 2 == b && b * 2 == a) && (b / 2 == a && a * 2 == b))
        {

            cout << "No" << endl;
        }
        else
        {

            cout << "Yes" << endl;
            return;
        }
    }
    if (a % 2 == 0)
    {
        if (a / 2 == b && b * 2 == a)
        {
            cout << "No" << endl;
        }
        else
        {

            cout << "Yes" << endl;
            return;
        }
    }
    else
    {
        if (b / 2 == a && a * 2 == b)
        {
            cout << "No" << endl;
        }
        else
        {

            cout << "Yes" << endl;
            return;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}