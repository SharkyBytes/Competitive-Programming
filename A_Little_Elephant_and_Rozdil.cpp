#include<bits/stdc++.h>

using namespace std;

void solve() {
 
   
  
   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

      int n;
  
    while (  cin >> n
) {
         int arr[n];
    for (int i = 0; i < n; i++) 
        cin >> arr[i];
int mini=INT_MAX;
int j=0;
    for(int i=0;i<n;i++){

        if(arr[i]<mini){
            mini=arr[i];
            j=i;

        }

    
    
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==mini){
            count++;

        }
    }

    
if(count>=2){
    cout<<"Still Rozdil"<<endl;
}
else{
    cout<<j+1   <<endl;
}

    }

    return 0;
}