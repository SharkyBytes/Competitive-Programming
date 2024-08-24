#include<bits/stdc++.h>

using namespace std;

void solve() {
    
    int x,y,z;
	cin>>x>>y>>z;
	int a=sqrt((x*y)/z);
	int b=sqrt((x*z)/y);
	int c=sqrt((y*z)/x);
	int val=(a+b+c)*4;
	cout<<val<<endl;    


   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}