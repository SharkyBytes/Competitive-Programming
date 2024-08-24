#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
  
   int count=0;



    for (int i = 0; i < n; i++) {
        int x=0;
        cin>>x;
        if(x==1||x==3){
            count++;
        }
    
}
cout<<count<<endl;

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