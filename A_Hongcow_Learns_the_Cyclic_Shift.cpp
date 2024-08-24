#include<bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    cin>>s;

    set<string>p;
    int n=s.length();

    for(int i=0; i<s.length();i++){

        string temp=s;

        for(int j=0; j<s.length();j++){

            temp[(j+1)%n]=s[j];

        }
        s=temp;
// cout<<temp<<endl;

        p.insert(temp);






    }

    cout<<p.size()<<endl;


   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

   solve();

    return 0;
}