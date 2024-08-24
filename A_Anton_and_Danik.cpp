#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin>>s;

    int c1=0;
    int c2=0;

    for(int i=0; i<n;i++){

        if(s[i]=='A'){
            c1++;
        }
        else if(s[i]=='D'){
            c2++;
        }

    }

    if(c1>c2){
        cout<<"Anton"<<endl;
    }
    else if(c1<c2){

         cout<<"Danik"<<endl;

    }

    else{

         cout<<"Friendship"<<endl;

    }


   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

  solve();

    return 0;
}