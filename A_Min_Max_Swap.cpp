#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
   int a[n];
    for (int i = 0; i < n; i++) 
        cin >> a[i];
   int b[n];
    for (int i = 0; i < n; i++) 
        cin >> b[i];

for(int i=0;i<n;i++){
    if(a[i]>b[i]){
        swap(a[i],b[i]);
    }
}

int mx1=0;
   for (int i = 0; i < n; i++) {
        if(mx1<a[i]){
            mx1=a[i];

        }
   }
int mx2=0;
   for (int i = 0; i < n; i++) {
        if(mx2<b[i]){
            mx2=b[i];

        }
   }

   cout<<mx2*mx1<<endl;



   
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