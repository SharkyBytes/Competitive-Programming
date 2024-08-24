#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int count=0;
    while(n--){

        string s;
        cin>>s;

        if(s=="++X"){

            ++count;

        }
       else if(s=="X++"){

            count++;

        }
       else if(s=="--X"){
  --count;
         

        }
       else if(s=="X--"){
          count--;

          

        }

    }

    cout<<count<<endl;


   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

   solve();

    return 0;
}