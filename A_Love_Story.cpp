#include<bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    cin>>s;

    string final="codeforces";
int count=0;
    for(int i=0; i<final.length();i++){
        if(s[i]!=final[i]){
            count++;
        }
    }
cout<<count <<endl;

   
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