#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
 
    vector<int> arr(n);
    for (int i = 0; i < n; i++) 
        cin >> arr[i];
int mini=INT_MAX;
int j=-1;
int p=-1;

    for(int i=0; i<n;i++){

        int diff=abs(arr[(i+1)%n]-arr[i]);
        if(mini>diff){
        mini=min(diff,mini);
        j=i+1;
        p=(i+2)%n;
        if(p==0){
            p=n;
        }


    }
    }

cout<<j<<" "<<p<<endl;




   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

   solve();

    return 0;
}