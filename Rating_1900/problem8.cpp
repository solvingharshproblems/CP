#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
const int A=1e6+1;
bool used[A],divs[A];
void solve(){
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    vector<int> vecDivs;
    for(int d=1;d*d<=x;d++){
        if(x%d==0){
            divs[d]=true;
            vecDivs.push_back(d);
            if(d*d<x){
                vecDivs.push_back(x/d);
                divs[x/d]=true;
            }
        }
    }
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int res=1;
    used[1]=true;
    vector<int> cur{1};
    for(int i=0;i<n;i++){
        if(!divs[a[i]]){
            continue;
        }
        vector<int> ncur;
        bool ok=true;
        for(int d:cur){
            long long prod=1ll*d*a[i];
            if(prod<=x && divs[prod] && !used[prod]){
                ncur.push_back((int)prod);
                used[prod]=true;
                if(prod==x){
                    ok=false;
                }
            }
        }
        for(int d:ncur){
            cur.push_back(d);
        }
        if(!ok){
            res++;
            for(int d:cur){
                used[d]=false;
            }
            used[1]=true;
            used[a[i]]=true;
            cur=vector<int>{1,a[i]};
        }
    }
    for(int d:vecDivs){
        divs[d]=false;
        used[d]=false;
    }
    cout<<res<<endl;
}
signed main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}