#include<bits/stdc++.h>

using namespace std;

void solve() {
   int n;
   cin>>n;

if(n>53){
    char x=n+'a'-53;


    cout<<x<<'z'<<'z'<<endl;
    return;

}
else if(n>27){
    char x=n+'a'-28;
    cout<<'a'<<x<<'z'<<endl;
    return;

}
else {

     char x=n+'a'-3;
    cout<<'a'<<'a'<<x<<endl;
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