#include<bits/stdc++.h>

using namespace std;

void solve() {
    int a,b,n;
cin>>a>>b>>n;

int temp=a;
int i=0;

bool hogya=false;

if(a%b==0){

    hogya=true;
}
while(!hogya && temp%b!=0 && i<=9){
    temp*=10;
    temp+=i;

    if(temp%b==0){
        hogya=true;
        n--;
        break;
    }

    i++;

    temp=a;
    
}
string ans=to_string(temp);
char toad='0';

while(n--){
   
    ans+=toad;
}
// cout<<hogya<<endl;

if(!hogya){
    cout<<-1<<endl;
    return;
}

else{
    cout<<ans<<endl;

}

// cout<<n<<endl;


   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

   solve();
    return 0;
}