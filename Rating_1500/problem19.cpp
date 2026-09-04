#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> a(n),b(m);
    for(auto &x:a){
        cin>>x;
    }
    for(auto &x:b){
        cin>>x;
    }
    vector<int> arr1(n+1,0),arr2(m+1,0);
    int c=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            c++;
            arr1[c]++;
        } 
        else{
            c=0;
        }
    }
    c=0;
    for(int i=0;i<m;i++){
        if(b[i]==1){
            c++;
            arr2[c]++;
        } 
        else{
            c=0;
        }
    }
    for(int i=n-1;i>0;i--){
        arr1[i]+=arr1[i+1];
    }
    for(int i=m-1;i>0;i--){
        arr2[i]+=arr2[i+1];
    }
    long long res=0;
    for(int i=1;i*i<=k;i++){
        if(k%i==0){
            int j=k/i;
            if(i<=n && j<=m){
                res+=arr1[i]*arr2[j];
            }
            if(i!=j && j<=n && i<=m){
                res+=arr1[j]*arr2[i];
            }
        }
    }
    cout<<res<<endl;
    return 0;
}