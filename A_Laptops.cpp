#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
 
   

vector<pair<int,int>> p;

for(int i=0; i<n;i++){
    int x,y;
    cin>>x>>y;
    p.push_back(make_pair(x,y));
}

sort(p.begin(),p.end());
int maxi=p[0].second;
for(int i=1; i<n;i++){

    if(p[i].second>=maxi){
        maxi=p[i].second;

    }
    else{
        cout<<"Happy Alex"<<endl;
        return;
    }
    
}

cout<<"Poor Alex"<<endl;
return;
   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}