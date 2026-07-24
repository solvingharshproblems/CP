#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
bool check(vector<long long>& a,int x){
    int n=a.size();
    vector<long long> b;
    for(int i=0;i<n;i++){
        if(a[i]!=x){
            b.push_back(a[i]);
        }
    }
    int m=b.size();
    for(int i=0;i<m;i++){
        if(b[i]!=b[m-i-1]){
            return false;
        }
    }
    return true;
}
void solve(){
    long long n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]!=a[n-i-1]){
            if(check(a,a[i]) || check(a,a[n-i-1])){
                cout<<"YES"<<endl;
            } 
            else{
                cout<<"NO"<<endl;
            }
            return;
        }
    }
    cout<<"YES"<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}