#include<bits/stdc++.h>

using namespace std;

void solve() {
   

   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int m;
    cin>>m;
   int arr[m];
    for (int i = 0; i < m; i++) 
        cin >> arr[i];

sort(arr,arr+m);
int mini=INT_MAX;


for(int i=0; i<m-n+1;i++){
    int x=arr[i+n-1]-arr[i];
    if(x<mini){
        mini=x;
    }
    
}


cout<<mini<<endl;


    return 0;
}