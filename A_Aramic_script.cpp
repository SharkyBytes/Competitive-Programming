#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<string> s;

   

    set<string>se;



    for(int i=0; i<n;i++){
        string p;
        cin>>p;
        s.push_back(p);

        sort(p.begin(),p.end());

        string temp;
        temp.push_back(p[0]);

        for(int j=1; j<p.length();j++){
            if(p[j-1]!=p[j]){

                temp.push_back(p[j]);

            }

        }

        // cout<<temp<<endl;



        se.insert(temp);

    }

 

    cout<<se.size()<<endl;




   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

   solve();

    return 0;
}