#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin>>s;
int count=0;
string temp="";
    for(int i=0; i<n;i+=2){
        if(s[i]=='a' && s[i+1]=='b'  || s[i]=='b' && s[i+1]=='a'  ){
            
            temp+=s[i];
            temp+=s[i+1];
            continue;
        }
        else{
            count++;
            temp+="ab";
        }
    }

cout<<count<<endl;



cout<<temp<<endl;
   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
solve();

    return 0;
}