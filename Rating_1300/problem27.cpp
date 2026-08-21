#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,h;
    cin>>n>>h;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int low=0,high=n-1,res=0;
    while(low<=high){
        int mid=(low+high)>>1;
        vector<int> temp;
        for(int i=0;i<=mid;i++){
            temp.push_back(v[i]);
        }
        sort(temp.begin(),temp.end());
        int height=0,p=mid;
        while(p>=0){
            height+=temp[p];
            p-=2;
            if(height>h){
                break;
            }
        }
        if(height>h){
            high=mid-1;
        } 
        else{
            res=mid;
            low=mid+1;
        }
    }
    cout<<res+1<<endl;
    return 0;
}