#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
      int m;
    cin >> m;

    string phla[n];

    for(int i=0; i<n;i++){
        string s;
        cin>>s;
        phla[i]=s;
    }

    // cout<<phla[0]<<endl;
  

    string dusra[m];

    for(int i=0; i<m;i++){
        string s;
        cin>>s;
        dusra[i]=s;
    }

int q;
cin>>q;

while(q--){
    int x;
    cin>>x;

    string temp= phla[(x-1)%n]+ dusra[(x-1)%m];
    cout<<temp<<endl;
}


   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

   solve();

    return 0;
}