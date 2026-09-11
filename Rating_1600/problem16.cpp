#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int l=1,r=n;
        while(l<r){
            int mid=(l+r)/2;
            cout<<"? "<<l<<" "<<mid<<endl;
            cout.flush();
            int cnt=0;
            for(int i=0;i<(mid-l+1);i++){
                int x;
                cin>>x;
                if(l<=x && x<=mid){
                    cnt++;
                }
            }
            if(cnt%2){
                r=mid;
            } 
            else{
                l=mid+1;
            }
        }
        cout<<"! "<<l<<endl;
        cout.flush();
    }
}