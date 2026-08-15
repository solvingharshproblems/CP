#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int GCD(int a,int b){
    if(b==0){
        return a;
    }
    return GCD(b,a%b);
}
void solve(){
    int n;
    cin>>n;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        for(int j=0;j<31;j++){
            if(temp & (1<<j)){
                mp[j]++;
            }
        }
    }
    int gcd=0,flag=1;
    for(auto i:mp){
        flag=0;
        if(gcd==0){
            gcd=i.second;
        } 
        else{
            gcd=GCD(gcd,i.second);
        }
    }
    if(flag){
        for(int i=0;i<n;i++){
            cout<<i+1<<" ";
        }
        cout<<endl;
        return;
    }
    vector<int> arr;
    for(int i=1;i*i<=gcd;i++){
        if(gcd%i==0){
            arr.push_back(i);
            if(i!=gcd/i){
                arr.push_back(gcd/i);
            }
        }
    }
    sort(arr.begin(),arr.end());
    for(int a:arr){
        cout<<a<<" ";
    }
    cout<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}