#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    while(b){
        a%=b;
        swap(a,b);
    }
    return a;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i:a){
        cin>>i;
    }
    int g=a[0];
    int count=0;
    for(auto i:a){
        g=gcd(g,i);
        if(i==1){
            count++;
        }
    }
    if(g>1){
        cout<<"-1"<<endl;
        return 0;
    }
    if(count){
        cout<<n-count<<endl;
        return 0;
    }
    int res=2*n;
    for(int i=0;i<n;i++){
        int gc=a[i];
        for(int j=i+1;j<n;j++){
            gc=gcd(gc,a[j]);
            if(gc==1){
                res=min(res,(n-1)+(j-i));
                break;
            }
        }
    }
    cout<<res<<endl;
    return 0;
}