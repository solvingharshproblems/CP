#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    char c;
    cin>>n>>c;
    string s;
    cin>>s;
    bool check=true;
    for(int i=0;i<n;i++){
        if(s[i]!=c){
            check=false;
            break;
        }
    }
    if(check){
        cout<<"0"<<endl;
        return;
    }
    int value=-1;
    for(long long i=2;i<=n;i++){
        bool isPositive=true;
        for(long long j=i;j<=n;j+=i){
            if(s[j-1]!=c){
                isPositive=false;
                break;
            }
        }
        if(isPositive){
            value=i;
            break;
        }
    }
    if(value==-1){
        cout<<"2"<<endl;
        cout<<n-1<<" "<<n<<endl;
    }
    else{
        cout<<"1"<<endl;
        cout<<value<<endl;
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}