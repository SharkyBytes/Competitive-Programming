    #include<bits/stdc++.h>

    using namespace std;

    void solve() {
        int n;
        cin >> n;
    
    int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            arr[i]=abs(arr[i]);

        }
        int p=sizeof(arr)/sizeof(arr[0]);

        sort(arr,arr+p);
        int count[200];
        int j=0;
        for(int i=0; i<n;i++){
        
            if(arr[i]==arr[i+1]){
                count[j]++;

            }
            else{
                j++;
                count[j]++;
            }
        }
    int kitne=0;
    int total=0;
        for(int i=0;i<200;i++){
            if(count[i]>0){
                kitne++;
                if(count[i]>=2){
                    total+=2;
                }
                else{
                    total+=1;

                }
            }

        }

        cout<<total<<endl;



    
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