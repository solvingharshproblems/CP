#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<long long int> Even(n,0),Odd(n,0);
    Even[0]=v[0];
    int flag=0;
    map<long long int,int> mp;
    mp[Odd[0]-Even[0]]++;
    for(int i=1;i<n;i++){
        Odd[i]+=Odd[i-1];
        Even[i]+=Even[i-1];
        if(i%2){
            Odd[i]+=v[i];
        } 
        else{
            Even[i]+=v[i];
        }
        mp[Odd[i]-Even[i]]++;
        if(mp[Odd[i]-Even[i]]==2 || Odd[i]-Even[i]==0){
            flag=1;
            break;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    } 
    else{
        cout<<"NO"<<endl;
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}