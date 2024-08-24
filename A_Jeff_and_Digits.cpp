#include<bits/stdc++.h>

using namespace std;

void solve() {



   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

      int n;
    cin >> n;
  
   int arr[n];
   int coun0=0;
   int coun5=0;
    for (int i = 0; i < n; i++){ 
        cin >> arr[i];

        if(arr[i]==0){
            coun0++;
        }

        else if(arr[i]==5){
           coun5++;
        }

    }

    if(coun0==0 ){
        cout<<-1<<endl;
        return 0;
    }

    int x=coun5/9;
    // cout<<x<<endl;
    string s;

    for(int i=0;i<(9*x);i++){
        s.push_back('5');

    }
    if(!s.empty()){
        for(int i=0;i<coun0;i++){
            s.push_back('0');
        }
    }
    else{
        s.push_back('0');
    }

    cout<<s<<endl;

    return 0;
}