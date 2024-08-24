#include<bits/stdc++.h>

using namespace std;

void solve() {
    int r;
    cin >> r;
    int b;
    cin>>b;
    int p;
    cin>>p;
    if( r==0||b==0){
         cout<<"NO"<<endl;
        return;

    }
    int mini =min(r,b);
    int maxi=max(r,b);

    int diff=maxi-mini;
    if(p==0){
        if(diff>0){
        cout<<"NO"<<endl;
        return;}
        else{
            cout<<"YES"<<endl;
            return;
        }
    }

    
    float rem=(float)diff/p;

    if(rem>mini){
        cout<<"NO"<<endl;
        return;
    }
    else{
         cout<<"YES"<<endl;
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