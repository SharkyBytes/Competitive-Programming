#include<bits/stdc++.h>

using namespace std;

void solve() {



   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

      int n,m,a,b;
  cin>>n>>m>>a>>b;

  int sum1=n*a;

  int temp=m;
  int sum2=b;
  while(temp<n){

    temp+=m;
    sum2+=b;
if(temp==n){
    break;
}
    if(temp>n){
        temp-=m;
        sum2-=b;
        break;
    }


  }
// cout<<temp<<endl;
// cout<<sum2<<endl;
//   if(m>n && sum1>b){
//     sum2+=b;
//   }


int x=0;
if(n-temp>0){
  x=n-temp;
sum2+=min(x*a,b);
}
 

//   cout<<sum2<<endl;
//   cout<<sum1<<endl;
  cout<<min(sum1,sum2)<<endl;

    return 0;
}