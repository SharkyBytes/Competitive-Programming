#include<bits/stdc++.h>

using namespace std;

void solve() {
  string s;
  cin>>s;
int n=s.length();
int cnta=0,cntb=0,cntc=0;


for(int i=0; i<n;i++){
    if(s[i]=='A'){
        cnta++;
    }
    if(s[i]=='B'){
        cntb++;
    }
    if(s[i]=='C'){
        cntc++;
    }

}

if(cntb==(cnta+cntc)){
    cout<<"YES"<<endl;
    return;

}
else{
    cout<<"NO"<<endl;
    return;
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