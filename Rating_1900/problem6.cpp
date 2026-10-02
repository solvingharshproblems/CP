#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int N;
    cin>>N;
    vector<int> A(N);
    for(int &x:A){
        cin>>x;
        --x;
    }
    vector<int> cnt(N, 0),is_last(N,0),last_pos(N,-1);
    for(int i=N-1;i>=0;i--){
        if(!cnt[A[i]]++){
            is_last[i]=1;
            last_pos[A[i]]=i;
        }
    }
    vector<int> res;
    multiset<int> st;
    int l=0,r=-1,flag=0;
    while(r+1<N){
        while(r+1<N && (r==-1 || !is_last[r])){
            ++r;
            if(is_last[last_pos[A[r]]]){
                st.emplace(A[r]);
            }
        }
        if(st.size()){
            res.emplace_back(flag?*begin(st):*rbegin(st));
            flag^=1;
            is_last[last_pos[res.back()]]=0;
            while(A[l]!=res.back()){
                if(auto it=st.find(A[l++]);it!=end(st)){
                    st.erase(it);
                }
            }
            st.erase(A[l++]);
        }
    }
    int M=(int)res.size();
    cout<<M<<endl;
    for(int i=0;i<M;i++){
        cout<<res[i]+1<<" \n"[i==M-1];
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}