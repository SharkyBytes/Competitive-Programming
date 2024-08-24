#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
   string s;
   cin>>s;

   set<string>se;

   for(int i=0; i<n-1;i++){

    string temp;
    temp.push_back(s[i]);
    temp.push_back(s[i+1]);

    se.insert(temp);

    

   

    
   }
cout<<se.size()<<endl;

   
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