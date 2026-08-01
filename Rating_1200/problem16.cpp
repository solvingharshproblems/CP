#include <bits/stdc++.h>
using namespace std;
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,q;
    cin>>n>>q;
    vector<pair<long long,int>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second=0;
    }
    pair<long long,int> cnt={0,-1};
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i].first;
    }
    for(int i=1;i<=q;i++){
        int type;
        cin>>type;
        if(type==1){
            int x;
            long long value;
            cin>>x>>value;
            x--;
            if(a[x].second>cnt.second){
                sum+=value-a[x].first;
            } 
            else{
                sum+=value-cnt.first;
            }
            a[x].first=value;
            a[x].second=i;
        }
        else{
            long long value;
            cin>>value;
            cnt={value,i};
            sum=1LL*n*value;
        }
        cout<<sum<<endl;
    }
}