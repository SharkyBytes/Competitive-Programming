#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
   string s;
   cin>>s;
   int zero=0;
   int one=0;
   for(int i=0; i<s.length();i++){

    if(s[i]=='0'){
        zero++;
    }
    else{
        one++;
    }
     
   }

   if(one!=zero){
    cout<<-1<<endl;
    return;
   }

   int i=0;
   int j=1;
//    cout<<s.substr(i);
vector<int> ans;
int cnt=0;
   while(i<=n-j){

    if(s[i]=='0' && s[n-j]==s[i]){
        string q=s.substr(0,n-j+1)+"01"+s.substr(n-j+1);
        cnt++;
        // cout<<q<<endl;
        ans.push_back(n-i);
        s=q; 
    }

    else if(s[i]=='1' && s[n-j]==s[i]){
        s.insert(s.begin()+i,'1');
        s.insert(s.begin()+i,'0');
        cnt++;
       
        ans.push_back(i);
        
    }
    n=s.length();
    i++;
    j++;
    

   }
cout<<cnt<<endl;
if(cnt>300){
    cout<<-1<<endl;
    return;
}
for(int i=0; i<cnt;i++){
    cout<<ans[i]<<" ";

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