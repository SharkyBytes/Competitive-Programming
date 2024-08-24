#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n=3;
   
    vector<int> arr(n);

    int index=-1;
    int maxi=INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        arr[i]=ceil(float(arr[i])/2);
            if(maxi<=arr[i]){
            maxi=arr[i];
            index=i;
        }
    }

    maxi--;

 

    if(index==0){
        cout<<30+3*maxi<<endl;;

    }
   else if(index==1){
        cout<<31+3*maxi<<endl;;

    }
    else if(index==2){
        cout<<32+3*maxi<<endl;;

    }
    


   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

   solve();

    return 0;
}