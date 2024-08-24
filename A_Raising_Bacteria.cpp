#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin>>n;

    int bact=0;
while(n>0){
    if(n&1){
        bact++;



    }

    n=n>>1;
   
}

cout<<bact<<endl;

   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
solve();
   

    return 0;
}