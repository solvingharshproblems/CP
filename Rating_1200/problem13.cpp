#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> a(m);
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    vector<int> gaps;
    for(int i=1;i<m;i++){
        gaps.push_back(a[i]-a[i-1]-1);
    }
    gaps.push_back((n-a[m-1])+(a[0]-1));
    sort(gaps.rbegin(),gaps.rend());
    int days=0,saved=0;
    for(int gap:gaps){
        int remaining=gap-2*days;
        if(remaining<=0){
            continue;
        }
        if(remaining==1){
            saved+=1;
            days+=1;
        }
        else{
            saved+=remaining-1;
            days+=2;
        }
    }
    int res=n-saved;
    cout<<res<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}