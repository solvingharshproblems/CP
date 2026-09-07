#include <bits/stdc++.h>
using namespace std;
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> l(n),r(n);
    for(int i=0;i<n;i++){
        cin>>l[i]>>r[i];
    }
    vector<pair<int,int>> arr;
    for(int i=0;i<n;i++){
        arr.push_back({l[i],1});
        arr.push_back({r[i]+1,-1});
    }
    sort(arr.begin(),arr.end());
    int res=0;
    for(auto it:arr){
        res+=it.second;
        if(res>2){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}