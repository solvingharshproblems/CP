#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<pair<int,int>> map;  
    for(int i=0;i<n;i++){
        map.push_back({a[i],i});
    }
    sort(map.rbegin(),map.rend());
    vector<int> res(n+1,0);
    res[0]=0;
    int minutes=0,coordinate=1;
    for(int i=0;i<n;i++){
        res[map[i].second+1]=coordinate;
        minutes+=2*abs(coordinate)*map[i].first;
        if(coordinate<0){
            coordinate=abs(coordinate)+1;
        }
        else{
            coordinate=-coordinate;
        }
    }
    cout<<minutes<<endl;
    for(int it:res){
        cout<<it<<" ";
    }
    cout<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}