#include <bits/stdc++.h>
using namespace std;
bool compare(vector<int>& v1,vector<int>& v2){
    if(v1[0]==v2[0]){
        return v1[1]>v2[1];
    } 
    else{
        return v1[0]<v2[0];
    }
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector<vector<int>> a(n);
    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        a[i]={l,r,i+1};
    }
    sort(a.begin(),a.end(),compare);
    int Max=a[0][1],index=a[0][2];
    for(int i=1;i<n;i++){
        if(Max>=a[i][1]) {
            cout<<a[i][2]<<' '<<index<<endl;
            return 0;
        } 
        else{
            if(a[i][1]>Max){
                Max=a[i][1];
                index=a[i][2];
            }
        }
    }
    cout<<"-1 -1"<<endl;
    return 0;
}