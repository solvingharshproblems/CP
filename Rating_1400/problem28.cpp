#include <bits/stdc++.h>
using namespace std;
int query(int i,int j){
    cout<<"? "<<i+1<<' '<<j+1<<endl;
    int res;
    cin>>res;
    return res;
}
int common(pair<int,int> a,pair<int,int> b){
    if(a.first==b.first || a.first==b.second){
        return a.first;
    } 
    else{
        return a.second;
    }
}
int other(pair<int,int> p,int a){
    if(p.first==a){
        return p.second;
    } 
    else{
        return p.first;
    }
}
int main(){
    vector<int> arr={4,8,15,16,23,42};
    int n=arr.size();
    map<int,pair<int,int>> m;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            m[arr[i]*arr[j]]={arr[i],arr[j]};
        }
    }
    vector<int> res(6);
    auto p1=m[query(0,1)];
    auto p2=m[query(1,2)];
    res[1]=common(p1,p2);
    res[0]=other(p1,res[1]);
    res[2]=other(p2,res[1]);
    p1=m[query(3,4)];
    p2=m[query(4,5)];
    res[4]=common(p1,p2);
    res[3]=other(p1,res[4]);
    res[5]=other(p2,res[4]);
    cout<<"! ";
    for(auto x:res){
        cout<<x<<' ';
    }
    cout<<endl;
    return 0;
}