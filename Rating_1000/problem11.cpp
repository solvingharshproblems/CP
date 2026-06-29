#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    long long n,d;
    cin>>n>>d;
    vector<long long> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    sort(p.begin(),p.end());
    long long l=-1,r=n-1,size=1;
    int res=0;
    while(l<r){
        if (p[r]*size>d){
            res++;
            r--;
            size=1;
            
        }
        else{
            l++;
            size++;
        }
    }
    cout<<res<<endl;
}
int main(void){
    solve();
}