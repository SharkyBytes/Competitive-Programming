#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s="";

    for(int i=1; i<=n;i++){
        s+="()";

    }
cout<<s<<endl;

int j=2;

for(int i=0; i<n-1;i++){
    string temp=s;
    swap(temp[1],temp[j]);
    j+=2;
    cout<<temp<<endl;
 
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