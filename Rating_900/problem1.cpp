#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
vector<int> dx={-1,1,-1,1};
vector<int> dy={-1,-1,1,1};
void solve(){
    long long a,b,xK,yK,xQ,yQ;
    cin>>a>>b;
    cin>>xK>>yK;
    cin>>xQ>>yQ;
    set<pair<int,int>> K,Q;
    for(int i=0;i<4;i++){
        K.insert({xK+dx[i]*a,yK+dy[i]*b});
        K.insert({xK+dx[i]*b,yK+dy[i]*a});
        Q.insert({xQ+dx[i]*a,yQ+dy[i]*b});
        Q.insert({xQ+dx[i]*b,yQ+dy[i]*a});
    }
    int res=0;
    for(auto i:K){
        if(Q.find(i)!=Q.end()){
            res++;
        }
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