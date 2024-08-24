#include<bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    cin>>s;


    vector<int> p(26,0);

    for(int i=0; i<s.length();i++){
        int x=s[i]-'a';
        p[x]++;
    
    }
int count=0;
    for(int i=0; i<p.size();i++){
        if(p[i]>=2){
            count++;
        }
    }

    if(count>=2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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