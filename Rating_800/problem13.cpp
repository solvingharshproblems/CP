#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    long long n;
    cin>>n;
    vector<long long> a(n),b,c;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long maxx=*max_element(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(a[i]!=maxx){
            b.push_back(a[i]);
        }
        else{
            c.push_back(a[i]);
        }
    }
    if(b.size()==0 || c.size()==0){
        cout<<-1<<endl;
    }
    else{
        cout<<b.size()<<" "<<c.size()<<endl;
        for(int i:b){
            cout<<i<<" ";
        }
        cout<<endl;
        for(int i:c){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}