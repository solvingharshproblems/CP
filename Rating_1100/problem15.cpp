#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    string s;
    cin>>s;
    long long n=s.size();
    int Max=0,i=0;
    while(i<n){
        if(s[i]=='0'){
            i++;
            continue;
        }
        int j=i+1;
        while(j<n && s[j]=='1'){
            j++;
        }
        Max=max(Max,j-i);
        i=j;
    }
    if(Max==n){
        cout<<n*n<<endl;
        return;
    }
    if(s[0]=='1' && s[n-1]=='1'){
        int i=0,count=0;
        while(i<n && s[i]=='1'){
            i++;
            count++;
        }
        int j=n-1;
        while(j>i && s[j]=='1'){
            j--;
            count++;
        }
        Max=max(Max,count);
    }
    Max++;
    long long temp=(Max+1)/2;
    long long res=temp*(Max/2);
    cout<<res<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}