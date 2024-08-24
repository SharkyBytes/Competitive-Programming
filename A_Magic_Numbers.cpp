#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int t;



   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

  int n;

    while (cin>>n) {
   string s=to_string(n);
int index=0;
while(true){
    index=s.find("144",index);
    if(index>=s.length()){
        break;
    }

    s.replace(index,3,"sss");
    index+=3;
}
index=0;
while(true){
    index=s.find("14",index);
    if(index>=s.length()){
        break;
    }

    s.replace(index,2,"ss");
    index+=2;
}
index=0;
while(true){
    index=s.find("1",index);
    if(index>=s.length()){
        break;
    }

    s.replace(index,1,"s");
    index+=1;
}
//    cout<<s<<endl;

   for(int i=0;i<s.length();i++){
    if(s[i]!='s'){
        cout<<"NO"<<endl;
        return 0;

    }
   }

   cout<<"YES"<<endl;
    }


    return 0;
}