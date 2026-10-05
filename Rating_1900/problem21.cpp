#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
bool check(long long H,long long W,vector<pair<int,int>> a){
    multiset<pair<int,int>> sh,sw;
    for(auto &p:a){
        sh.insert({p.first,p.second});
        sw.insert({p.second,p.first});
    }
    while(!sh.empty()){
        auto itw=prev(sw.end());
        auto ith=prev(sh.end());
        if(itw->first==W){
            int h=itw->second;
            sw.erase(itw);
            sh.erase(sh.find({h,W}));
            H-=h;
        } 
        else if(ith->first==H){
            int w=ith->second;
            sh.erase(ith);
            sw.erase(sw.find({w,H}));
            W-=w;
        } 
        else{
            return false;
        }
    }
    return true;
}
void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    long long area=0;
    int maxh=0,maxw=0;
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
        area+=1LL*a[i].first*a[i].second;
        maxh=max(maxh,a[i].first);
        maxw=max(maxw,a[i].second);
    }
    vector<pair<long long,long long>> res;
    if(area%maxw==0){
        long long h=area/maxw;
        if(check(h,maxw,a)){
            res.push_back({h,maxw});
        }
    }
    if(area%maxh==0){
        long long w=area/maxh;
        if(check(maxh,w,a)){
            res.push_back({maxh,w});
        }
    }
    sort(res.begin(),res.end());
    res.erase(unique(res.begin(),res.end()),res.end());
    cout<<res.size()<<endl;
    for(auto &p:res){
        cout<<p.first<<' '<<p.second<<endl;
    }
}
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}