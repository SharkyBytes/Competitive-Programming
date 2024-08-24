#include<bits/stdc++.h>

using namespace std;

void solve() {
   

   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

   int n;
    cin >> n;
    int t;
    cin>>t;
   
   int sum=n;
   int rem=0;
   vector<int>arr;


   while(n>1){

    int q=n/t;
    if(q==0){
        break;
    }
    rem=n%t;
    
    sum+=q;
    n=(n/t)+rem;
   



   }

 

   cout<<sum<<endl;
    return 0;
}