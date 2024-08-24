#include<bits/stdc++.h>

using namespace std;

void solve() {


   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

       string s;
    cin>>s;
int zero=0;
    for(int i=0;i<s.length();i++){

        if(zero==0){
            if(s[i]=='0'){
                s.replace(i,1,"");
            zero++;

            }
        }

    }

    if(zero==0){
        s.replace(0,1,"");

    }
cout<<s<<endl;
    return 0;
}