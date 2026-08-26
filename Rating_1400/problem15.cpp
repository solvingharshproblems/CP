#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    long long n,x,y;
    cin>>n>>x>>y;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int odd=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==1){
            odd++;
        }
    }
    int aliceStart=x%2;
    int bobStart=1-aliceStart;
    int aliceEnd,bobEnd;
    if(odd%2==0){
        aliceEnd=aliceStart;
        bobEnd=bobStart;
    } 
    else{
        aliceEnd=1-aliceStart;
        bobEnd=1-bobStart;
    }
    if(y%2==aliceEnd){
        cout<<"Alice"<<endl;
    } 
    else{
        cout<<"Bob"<<endl;
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}