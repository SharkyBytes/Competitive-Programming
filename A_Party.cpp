#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
   
   
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

  int n;

    while (cin>>n) {
      
    int arr[n];
    set<int> s;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        s.insert(arr[i]%3);

    }

    cout<<s.size()<<endl;
    }

    return 0;
}