#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string temp;
    cin >> temp;

    int t;
    cin >> t;

    int x = t;

    int calc = 0;

    while (t--)
    {

        string s = temp;
        string p;
        cin >> p;

        bool sahi = false;

        if (p.length() != s.length())
        {
            sahi = false;
        }
        else
        {

            for (int i = 0; i < p.length(); i++)
            {
                if (p[i] == s[i] || abs(p[i] - s[i]) == 32)
                {
                    s.erase(i);
                    p.erase(i);
                    i--;
                    continue;
                }
            }
        }

        cout << s << endl;
        cout << p << endl;

        if (sahi)
        {
            calc++;
        }
    }

    if (calc == x)
    {
        cout << "Yes" << endl;
    }

    else
    {
        cout << "No" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}