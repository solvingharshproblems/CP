#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1){
        cout<<1<<endl;
        return;
    }
    vector<long long> arr;
    arr.push_back(a[0]);
    arr.push_back(a[1]);
    for(int i=2;i<n;i++){
        int currSize=(int)arr.size();
        long long x=arr[currSize-2]-arr[currSize-1];
        long long y=arr[currSize-1]-a[i];
        if(x>0){
            if(y>0){
                arr[currSize-1] =a[i];
            } 
            else if(y<0){
                arr.push_back(a[i]);
            }
        } 
        else{
            if(y<0){
                arr[currSize-1]=a[i];
            } 
            else if(y>0){
                arr.push_back(a[i]);
            }
        }
    }
    int res=(int)arr.size();
    if(arr[0]==arr[1]){
        res--;
    }
    cout<<res<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}