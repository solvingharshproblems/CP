#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
class Fenwick{
    vector<int> bit;
    int n;
public:
    Fenwick(int n){
        this->n=n;
        bit.assign(n+1,0);
    }
    void update(int index,int val){
        while(index<=n){
            bit[index]+=val;
            index+=index&-index;
        }
    }
    int query(int index){
        int sum=0;
        while(index>0){
            sum+=bit[index];
            index-=index&-index;
        }
        return sum;
    }
};
void solve(){
    int n;
    cin>>n;
    vector<pair<long long,long long>> people(n);
    for(int i=0;i<n;i++){
        cin>>people[i].first>>people[i].second;
    }
    sort(people.begin(),people.end());
    vector<long long> values;
    for(auto [a,b]:people){
        values.push_back(b);
    }
    sort(values.begin(),values.end());
    Fenwick fw(n);
    long long res=0;
    for(int i=0;i<n;i++){
        long long b=people[i].second;
        int rank=lower_bound(values.begin(),values.end(),b)-values.begin()+1;
        int previous=i;
        int notGreater=fw.query(rank);
        res+=previous-notGreater;
        fw.update(rank,1);
    }
    cout<<res<<endl;
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