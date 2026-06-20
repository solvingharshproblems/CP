#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int minOperations(string n,string a){
    int operations=0;
    int index=a.size()-1;
    for(int i=n.size()-1;i>=0;i--){
        if(n[i]==a[index]){
            index--;
            if(index<0){
                break;
            }
        }
        else{
            operations++;
        }
    }
    if(index>=0){
        operations=INT_MAX;
    }
    return operations;
}
void solve(){
    string n;
    cin>>n;
    vector<string> arr= {"00", "25", "50", "75"};
    int res=INT_MAX;
    for(auto a:arr){
        res=min(res,minOperations(n,a));
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