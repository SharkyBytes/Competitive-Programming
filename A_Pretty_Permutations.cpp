#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[n];
  for(int i=0; i<n;i++){
    arr[i]=i+1;
  }
  if(n%2==0){

    for(int i=0; i<n;i+=2){
        swap(arr[i],arr[i+1]);
    }
   
  }
  else{
    // int b[n];
    int temp=arr[2];
    for(int i=2; i>0;i--){
        arr[i]=arr[i-1];

      
    }
   arr[0]=temp;

    for(int i=3; i<n;i+=2){
        swap(arr[i],arr[i+1]);
    }

  }

 for(int i=0; i<n;i++){
   cout<<arr[i]<<" ";
  } 
  
cout<<endl;
   
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