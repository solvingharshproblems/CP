#include <bits/stdc++.h>
using namespace std;
const long long INF=numeric_limits<long long>::min();
struct SegmentTree{
    int n;
    vector<long long> tree;
    SegmentTree(const vector<long long>& arr){
        n=arr.size();
        tree.resize(4*n);
        build(arr,0,0,n-1);
    }
    void build(const vector<long long>& arr,int v,int tl,int tr){
        if(tl==tr){
            tree[v]=arr[tl];
        } 
        else{
            int tm=(tl+tr)/2;
            build(arr,2*v+1,tl,tm);
            build(arr,2*v+2,tm+1,tr);
            tree[v]=max(tree[2*v+1],tree[2*v+2]);
        }
    }
    long long query(int l,int r){
        if(l>r){
            return INF;
        }
        return query2(0,0,n-1,l,r);
    }
    long long query2(int v,int tl,int tr,int l,int r){
        if(l>r){
            return INF;
        }
        if(l==tl && r==tr){
            return tree[v];
        }
        int tm=(tl+tr)/2;
        return max(query2(2*v+1,tl,tm,l,min(r,tm)),query2(2*v+2,tm+1,tr,max(l,tm+1),r));
    }
};
string solve() {
    int n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> x(n,-1),y(n,n);
    stack<int> s1,s2;
    for(int i=0;i<n;i++){
        while(!s1.empty() && a[s1.top()]<=a[i]){
            s1.pop();
        }
        if(!s1.empty()){
            x[i]=s1.top();
        }
        s1.push(i);
    }
    for(int i=n-1;i>=0;i--){
        while(!s2.empty() && a[s2.top()]<a[i]){
            s2.pop();
        }
        if(!s2.empty()){
            y[i]=s2.top();
        }
        s2.push(i);
    }
    vector<long long> p(n+1,0),s(n+1,0);
    for(int i=0;i<n;i++){
        p[i+1]=p[i]+a[i];
    }
    for(int i=n-1;i>=0;i--){
        s[i]=s[i+1]+a[i];
    }
    SegmentTree ptree(p);
    SegmentTree stree(s);
    for(int k=0;k<n;k++){
        int l=x[k]+1;
        int r=y[k]-1;
        long long maxSuffix=stree.query(l,k);
        if(maxSuffix>a[k]+s[k+1]){
            return "NO";
        }
        long long maxPrefix=ptree.query(k+1,r+1);
        if(maxPrefix>a[k]+p[k]){
            return "NO";
        }
    }
    return "YES";
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}