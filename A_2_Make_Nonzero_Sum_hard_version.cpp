#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if ( arr[i] != 0)
        {
            cnt++;
        }
    }
    if(cnt%2!=0){
        cout<<-1<<endl;
        return;
    }

    vector<pair<int, int>> p;
    int sum = 0;
    int i = 0;
    while (i < n)
    {

        if (i == n - 1)
        {
            p.push_back({i + 1, i + 1});
            sum += (arr[i]);
            break;
        }
        if (arr[i] == arr[i + 1])
        {
            p.push_back({i + 1, i + 2});
            i += 2;
        }
        else if (sum > 0)
        {
            if (arr[i] == 0 && arr[i + 1] > 0)
            {
                p.push_back({i + 1, i + 2});
                i += 2;
            }
            else if (arr[i] < 0 && arr[i + 1] == 0)
            {
                p.push_back({i + 1, i + 2});
                i += 2;
            }
            sum -= 1;
        }
        else if (sum < 0)
        {
            if (arr[i] == 0 && arr[i + 1] < 0)
            {
                p.push_back({i + 1, i + 2});
                i += 2;
            }
            else if (arr[i] > 0 && arr[i + 1] == 0)
            {
                p.push_back({i + 1, i + 2});
                i += 2;
            }
            sum += 1;
        }

        else
        {
            p.push_back({i + 1, i + 1});

            sum += (arr[i]);
            i += 1;
        }
    }
    // cout<<i<<endl;

    // cout<<sum<<endl;
    bool ok = false;
    if ((sum != 0 && cnt % 2 != 0) || (sum == 0 && cnt % 2 == 0))
    {
        ok = true;
    }
   
    // {
    //     cout << -1 << endl;
    //     return;
    // }

    cout << p.size() << endl;
    for (int i = 0; i < p.size(); i++)
    {
        cout << p[i].first << " " << p[i].second << endl;
    }
}

signed main()
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