#include <bits/stdc++.h>
using namespace std;
const int MAX=100000;
long long calculate(vector<int>& v){
    sort(v.begin(),v.end(),greater<>());
    int n=v.size();
    long long sum=0;
    for(int i=0,j=n-1;i<n;i++,j-=2){
        sum+=1LL*j*v[i];
    }
    return sum;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<vector<int>> a(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            a[i][j]--;
        }
    }
    vector<vector<int>> x(MAX),y(MAX);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            x[a[i][j]].push_back(i);
            y[a[i][j]].push_back(j);
        }
    }
    long long res=0;
    for (int i=0;i<MAX;i++){
        res+=calculate(x[i]);
        res+=calculate(y[i]);
    }
    cout<<res;
    return 0;
}
