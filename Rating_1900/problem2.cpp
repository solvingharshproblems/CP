#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<pair<long long,long long>>arr1(n);
    for(int i=0;i<n;i++){
        cin>>arr1[i].first>>arr1[i].second;
    }
    map<pair<long long,long long>,int> index;
    for(int i=0;i<n;i++){
        index[arr1[i]]=i;
    }
    sort(arr1.begin(),arr1.end(),[](const pair<long long, long long> &A,const pair<long long,long long> &B){
        if(A.first!=B.first){
            return A.first<B.first;
        }
        return A.second>B.second;
    });
    vector<pair<long long,long long>> arr2=arr1;
    sort(arr2.begin(),arr2.end(),[](const pair<long long,long long> &A,const pair<long long,long long> &B){
        if(A.second!=B.second){
            return A.second>B.second;
        }
        return A.first<B.first;
    });
    vector<long long> res1(n,0),res2(n,0);
    set<long long> s1,s2;
    for(int i=0;i<n;i++){
        long long l=arr1[i].first;
        long long r=arr1[i].second;
        auto it=s2.lower_bound(r);
        if(it!=s2.end()){
            res1[index[{l,r}]]=*it-r;
        }
        s2.insert(r);
    }
    for(int i=0;i<n;i++){
        long long l=arr2[i].first;
        long long r=arr2[i].second;
        auto it=s1.upper_bound(l);
        if(it!=s1.begin()){
            --it;
            res2[index[{l,r}]]=l-*it;
        }
        s1.insert(l);
    }
    for(int i=0;i<n;i++){
        cout<<res1[i]+res2[i]<<' ';
    }
    cout<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}