#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    if(n&1){
        cout<<0<<endl;
        return;
    }

    int op=0;
    for(int i=1; i<=n;i++){
        
        int x=i;
        int temp=n;
        temp-=2*i;

        int div=temp/2;

        if(div<=x){
            break;
        }
// cout<<div<<" "<<x<<endl;
        op++;

    }

    cout<<op<<endl;


   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
solve();

    return 0;
}