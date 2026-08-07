#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> arr(m);
    for(int i=0;i<n;i++){
        arr[a[i]%m]++;
    }
    int res=0;
    for(int i=0;i<m;i++){
        int x=arr[i],y=arr[(m-i)%m];
        if(x==0 && y==0){
            continue;
        }
        int temp=min(x,y);
        x-=min(temp+1,x);
        y-=min(temp+1,y);
        res++;
        res+=x+y;
        arr[i]=0;
        arr[(m-i)%m]=0;
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