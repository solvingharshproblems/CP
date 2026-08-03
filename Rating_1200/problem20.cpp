#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int res=INT_MAX;
    for(char c='a';c<='z';c++){
        int temp=0;
        bool isPossible=true;
        int i=0,j=n-1;
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
                continue;
            }
            if(s[i]==c){
                temp++;
                i++;
            }
            else if(s[j]==c){
                temp++;
                j--;
            }
            else{
                isPossible=false;
                break;
            }
        }
        if(!isPossible){
            temp=INT_MAX;
        }
        res=min(res,temp);
    }
    if(res==INT_MAX){
        res=-1;
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