#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    vector<long long> fa,fb;
    for(long long i=1;i*i<=a;i++){
        if(a%i==0){
            fa.push_back(i);
            if(i*i!=a){
                fa.push_back(a/i);
            }
        }
    }
    for(long long i=1;i*i<=b;i++){
        if(b%i==0){
            fb.push_back(i);
            if(i*i!=b){
                fb.push_back(b/i);
            }
        }
    }
    for(long long x1:fa){
        for(long long y1:fb){
            long long p=x1*y1;
            long long q=(a*b)/p;
            long long x=a+1;
            if(x%p){
                x+=p-(x%p);
            }
            long long y=b+1;
            if(y%q){
                y+=q-(y%q);
            }
            if(x<=c && y<=d){
                cout<<x<<" "<<y<<endl;
                return;
            }
        }
    }
    cout<<"-1 -1"<<endl;
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