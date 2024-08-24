#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) 
        cin >> arr[i];
int c=0;
    for(int i=1; i<n-1;i++){

        if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
            c++;
        }
       else if(arr[i]<arr[i+1] && arr[i]<arr[i-1]){
            c++;
        }
    }
cout<<c<<endl;


   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}