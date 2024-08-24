#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr;
    int count=0;

    if (n % 2 == 0)
    {
        int x = n / 2;

        for (int i = 0; i < x; i++)
        {

            arr.push_back(2);
            count++;
        }
    }

    else if(n%2!=0){
        n-=3;
        int x = n / 2;
        count=1;


        for (int i = 0; i < x; i++)
        {

            arr.push_back(2);
            count++;
        }

        arr.push_back(3);
    }
cout<<count<<endl;

for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

  solve();

    return 0;
}