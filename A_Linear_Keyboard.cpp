#include<bits/stdc++.h>

using namespace std;

void solve() {
  string s;
  cin>>s;
string p;
cin>>p;
map<char,int>mp;
for(int i=0; i<s.length();i++){
    char ch=s[i];
    mp[ch]=i+1;

}

// cout<<mp[s[s.length()-1]]<<endl;

int temp=0;
for(int i=0;i<p.length()-1;i++){
    temp+= abs(mp[p[i+1]]-mp[p[i]]);
    
}
cout<<temp<<endl;


   
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