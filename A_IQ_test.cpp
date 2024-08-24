#include<bits/stdc++.h>

using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;
 
    vector<int> arr(n);
    vector<int> eve;
    vector<int> odd;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i]%2==0){
            eve.push_back(i);
        }
        else{
            odd.push_back(i);
        }


    }
    if(odd.size()==1){
        cout<<odd[0]+1<<endl;
        return;
    }
    else if(eve.size()==1){
        cout<<eve[0]+1<<endl;
        return;
    }
   
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

   solve();

    return 0;
}