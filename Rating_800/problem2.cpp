#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n,x;
    cin>>n>>x;
    vector<int> arr;
    arr.push_back(0);
    for(int i=0;i<n;i++){
        int point;
        cin>>point;
        arr.push_back(point);
    }
    arr.push_back(x);
    n=arr.size();
    int maxDist=INT_MIN;
    for(int i=1;i<n;i++){
        if(i==n-1){
            maxDist=max(maxDist,2*(arr[i]-arr[i-1]));
        }
        else{
            maxDist=max(maxDist,arr[i]-arr[i-1]);
        }
    }
    cout<<maxDist<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}