#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
int neg=0;
bool zer=false;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){ 
        cin >> arr[i];
       if(arr[i]<0){
        neg++;
       }

       if(arr[i]==0){
        zer=true;
       }

    }

    // cout<<product<<endl;

    if(neg%2!=0 || zer ){
        cout<<0<<endl;
     

    }

    else{
        cout<<1<<endl;
        cout<<1<<" "<<0<<endl;
    }

    


   
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