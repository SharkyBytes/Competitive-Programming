#include<bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    cin>>s;
int ca=0;
int cb=0;
int cc=0;
    int n=s.length();

 for(int i=0; i<n;i++){
        if(s[i]=='A'){
            ca++;
        }
        else if(s[i]=='B'){
            cb++;
        }
       else if(s[i]=='C'){
            cc++;
        }
    }


if(s[0]==s[n-1]){
    cout<<"NO"<<endl;
    return;

}

char ch=s[0];

if(ca==cb+cc || cc==cb+ca || cb==ca+cc  ){

    cout<<"YES"<<endl;

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