#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int t;
    cin>>t;
    int count=0;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if(arr[i]>0 &&  arr[i]>=arr[t-1]){
            count++;
        }


    }

    cout<<count<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
solve();

    return 0;
}