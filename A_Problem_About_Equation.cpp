#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int t;
    cin >> t;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    auto b = arr;
    sort(b.begin(), b.end());
    int maxi = b[n - 1];

    // cout<<maxi<<endl;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {

        sum += maxi - arr[i];
    }

    if (sum > t)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        float ans[n];

        for (int i = 0; i < n; i++)
        {

            ans[i] = float(maxi - arr[i]);

            t -= ans[i];
        }

        float divide = (float)t / n;
        // cout<<divide<<endl;
        for (int i = 0; i < n; i++)
        {
            ans[i] += divide;
        }
        for (int i = 0; i < n; i++)
        {
            cout << fixed << setprecision(6) << ans[i] << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}