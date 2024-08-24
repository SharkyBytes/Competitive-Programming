#include<bits/stdc++.h>

using namespace std;

void solve() {
    int a,b,n,s;
    cin>>a>>b>>n>>s;
    // cout<<s;

    int x=s/n;
    if(x>a){
        x=a;    
    }

    int y=s-(n*x);

    if(y>b){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
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