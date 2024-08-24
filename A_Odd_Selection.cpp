#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int k;
    cin>>k;
    vector<int> arr(n);
    int even =0; 
    int odd=0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }

    }
    if(even==0){
        if(k%2==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

    else if(odd==0){
        cout<<"NO"<<endl;
    }

    else{
        if(even>=k-1){
            cout<<"YES"<<endl;
        }

        else{
            int p=k-even;
            if(p%2==0){
                odd-=p;
                if(odd>0){
            cout<<"YES"<<endl;
            return;

                }
             
            cout<<"NO"<<endl;
                
            }
            else{
                cout<<"YES"<<endl;
            }
        }
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