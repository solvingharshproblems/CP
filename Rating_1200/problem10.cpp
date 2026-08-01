#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int Search(vector<long long> &pmax,int n,long long val){
    int low=0,high=n-1;
    int res=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(pmax[mid]<=val){
            res=mid;
            low=mid+1;
        } 
        else{
            high=mid-1;
        }
    }
    return res;
}
void solve(){
    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<long long> k(q);
    for(int i=0;i<q;i++){
        cin>>k[i];
    }
    vector<long long> Max(n),Sum(n);
    Max[0]=a[0];
    Sum[0]=a[0];
    for(int i=1;i<n;i++){
        Max[i]=max(Max[i-1],(long long)a[i]);
        Sum[i]=Sum[i-1]+a[i];
    }
    for(int i=0;i<q;i++){
        long long val=k[i];
        int x=Search(Max,n,val);
        if(x==-1){
            cout<<"0 ";
        } 
        else{
            cout<<Sum[x]<<" ";
        }
    }
    cout<<"\n";
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}