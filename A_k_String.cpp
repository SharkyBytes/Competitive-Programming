#include<bits/stdc++.h>

using namespace std;

void solve() {
   

   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    string arr;
    cin>>arr;

    int count[26]={0};
    for (int i = 0; i <arr.length(); i++) {
        // cin >> arr[i];
     count[arr[i]-'a']++;
        }



    for(int i=0;i<26;i++){
   
      if(count[i]%n!=0){
        cout<<-1<<endl;
        return 0;
      }
    }

   

    string ans;
    for(int i=0;i<26;i++){

      int div=count[i]/n;

     while(div>0){
      ans.push_back(i+'a');
      div--;
     }
    }
  string final;
    while(n>0){
      final+=ans;
      n--;
    }

    


cout<<final<<endl;

    return 0;
}