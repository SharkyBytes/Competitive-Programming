#include<bits/stdc++.h>

using namespace std;



void solve() {
    int n;
    cin >> n;
   int k;
   cin>>k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) 
        cin >> arr[i];

sort(arr.begin(),arr.end());

if(n>1 && (arr[1]-arr[0])%k){
    cout<<-1<<endl;
    return;
}

long long sec=0;

for(int i=0; i<n;i++){
    int diff=arr[i]-arr[0];
    if(diff%k!=0){

        cout<<-1<<endl;
        return;

    }
    sec+=diff/k;

}
cout<<sec<<endl;

   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

   solve();

    return 0;
}