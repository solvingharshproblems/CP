#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    long long n;
    cin>>n;
    vector<long long> arr(n),arr2(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    int res1=-1,res2=-1;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr2[i]) {
            if(res1==-1){
                res1=i;
            } 
            else{
                res2=i;
                break;
            }
        }
    }
    int i=res1-1;
    while(i>=0){
        if(arr2[i]<=arr2[i+1]){
            i--;
        }
        else{
            break;
        }
    }
    res1=i+1;
    if(res2==-1){
        res2=n-1;
    }
    int j=res2+1;
    while(j<n){
        if(arr2[j]>=arr2[j-1]){
            j++;
        } 
        else{
            break;
        }
    }
    res2=j-1;
    cout<<res1+1<<" "<<res2+1<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}