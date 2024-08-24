#include<bits/stdc++.h>

using namespace std;

void solve() {
    int x1,p1;
    cin>>x1>>p1;
    int x2,p2;
    cin>>x2>>p2;

    string str1=to_string(x1);
    string str2=to_string(x2);
    int temp=str1.length()-str2.length();
    if(temp<0){
      x1=  x1*pow(10,-1*temp);
        p1+=temp;
    }
else{
 x2=   x2*pow(10,temp);
    p2-=temp;
}

if(x1>x2 && p1>=p2 || x2>x1 && p1>p2 || x1==x2 && p1>p2){
    cout<<">"<<endl;
}
else if(x1<x2 && p1<=p2 || x1>x2 && p1<p2|| x1==x2 && p1<p2){
    cout<<"<"<<endl;
}
else{
    cout<<"="<<endl;
}
// cout<<x1;
// cout<<p1<<p2<<temp<<endl;

   
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