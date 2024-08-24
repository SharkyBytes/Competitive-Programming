#include<bits/stdc++.h>

using namespace std;

void solve() {





   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

       int sum;
    cin >> sum;
    int n=7;
   int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];}
int j=0;
        for(int i=0;i%n<n;i++){
            sum-=arr[i%n];
            if(sum<=0){
                j=(i%n)+1;
                break;

            }
         

            // cout<<sum<<endl;

        }
 

   cout<<j<<endl;
    return 0;
}