#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    vector<int> pos(n+1);
    for(int i=0;i<n;i++){
        pos[b[i]]=i;
    }
    int res=0,sum=-1;
    for(int i=0;i<n;i++){
        int curr=a[i];
        if(pos[curr]<sum){
            res++;
        }
        sum=max(sum,pos[curr]);
    }
    cout<<res<<endl;
    return 0;
}