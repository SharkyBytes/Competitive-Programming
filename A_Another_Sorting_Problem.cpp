#include<bits/stdc++.h>

using namespace std;



void solve() {
    int n;
    cin >> n;
    int l;
    cin>>l;

    vector<string> arr(n);

    for(int i=0; i<n;i++)
{
    cin>>arr[i];
    

   

}

for(int i=0; i<l;i++){
    for(int j=0; j<n;j++){

        sort(arr[j].begin(),arr[j].end());
    
    }
}


   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

   solve();

    return 0;
}