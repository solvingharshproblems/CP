#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n,x;
    cin>>n>>x;
    vector<int> arr[3];
    for(int i=0;i<3;i++){
        int s=0;
        arr[i].push_back(s);
        for(int j=0;j<n;j++){
            int a;
            cin>>a;
            if((s|a)!=s){
                s|=a;
                arr[i].push_back(s);
            }
        }
    }
    bool ans=false;
    for(int i:arr[0]){
        for(int j:arr[1]){
            for(int k:arr[2]){
                if((i|j|k)==x){
                    ans=true;
                }
            }
        }
    }
    if(ans){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}