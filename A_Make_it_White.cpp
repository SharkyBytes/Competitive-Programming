#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin>>s;

    int f=0;
    int p=0;

    for(int i=0; i<n;i++){
        if(s[i]=='B'){
            f=i;
            break;
        }
    }
    for(int i=n-1; i>=0;i--){
        if(s[i]=='B'){
            p=i;
            break;
        }
    }

    cout<<p-f+1<<endl;


   
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