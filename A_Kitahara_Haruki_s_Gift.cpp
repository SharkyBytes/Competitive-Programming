#include<bits/stdc++.h>

using namespace std;

void solve() {
       int n;
    cin >> n;
    
    int arr[n];
    int two=0;
    int one=0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i]==200){
            two++;
        }
        else{
            one++;
        }

    }


   if(one&1){
     cout<<"NO"<<endl;
        return;

   }

    if(one&1 && two==0 ||  two&1 && one==0 ){
     
        cout<<"NO"<<endl;
        return;
    }

   else{
    cout<<"YES"<<endl;
    return;
   }


    

   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);


solve();
 

    return 0;
}