#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int A,B,C,D;
    cin>>A>>B>>C>>D;
    int count=0;
    for(int i=B;i<=C;i++){
        int l,r;
        l=max(A,C-i);
        r=min(B,D-i);
        if(l<=r){
            count+=(r-l+1)*(i-C)+(r*(r+1)/2-l*(l-1)/2);
        }
        l=max(A,D-i+1);
        r=B;
        if(l<=r){
            count+=(r-l+1)*(D-C+1);
        }
    }
    cout<<count<<endl;
    return 0;
}