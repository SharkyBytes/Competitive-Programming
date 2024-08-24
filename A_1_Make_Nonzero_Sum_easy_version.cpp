#include<bits/stdc++.h>

using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;
 int minus=0;
 int plus=0;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if(arr[i]==-1){
            minus++;
        }
        else{
            plus++;
        }

       
    }
    if((plus%2==0 && minus%2!=0)|| (plus%2!=0 && minus%2==0 )){
cout<<-1<<endl;
return;

    }
   
    vector<pair<int,int>> p;

    

   for(int i=0; i<n;i+=2){

    if(arr[i]==arr[i+1]){
        p.push_back({i+1,i+2});
    }
    else{
        p.push_back({i+1,i+1});
        p.push_back({i+2,i+2});
    }

   }
cout<<p.size()<<endl;
   for(int i=0; i<p.size();i++){
cout<<p[i].first<<" "<<p[i].second<<endl;
   }

   

   


   
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}