#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    long long w,h;
    cin>>w>>h;
    long long area=INT_MIN;
    for(int i=0;i<4;i++){
        long long k;
        cin>>k;
        long long first,last;
        for(int j=0;j<k;j++){
            long long x;
            cin>>x;
            if(j==0){
                first=x;
            }
            if(j==k-1){
                last=x;
            }
        }
        long long base=last-first;
        long long height;
        if(i<=1){
            height=h;
        } 
        else{
            height=w;
        }
        area=max(area,base*height);
	}
    cout<<area<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}