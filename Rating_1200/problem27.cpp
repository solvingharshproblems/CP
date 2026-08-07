#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    vector<bool> arr(n);
    int count0=0,count1=0;
    for(int i=0;i<n;i++){
        if(a[i]=='0'){
            count0++;
        } 
        else{
            count1++;
        }
        if(count0==count1){
            arr[i]=true;
        }
    }
    bool isFlipped=false,isPossible=true;
    for(int i=n-1;i>=0;i--){
        if(isFlipped==false){
            if(a[i]!=b[i]){
                if(arr[i]){
                    isFlipped^=true;
                } 
                else{
                    isPossible=false;
                    break;
                }
            }
        } 
        else{
            if(a[i]==b[i]){
                if(arr[i]){
                    isFlipped^=true;
                } 
                else{
                    isPossible=false;
                    break;
                }
            }
        }
    }
    if(isPossible){
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