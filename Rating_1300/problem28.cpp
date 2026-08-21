#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n),freq(1000001,0);
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        freq[a[i]]++;
        sum+=a[i];
    }
    vector<int> res;
    for(int i=0;i<n;i++){
        long long newSum=sum-a[i];
        freq[a[i]]--;
        if(newSum%2==0){
            long long target=newSum/2;
            if(target<=1000000 && freq[target]>0){
                res.push_back(i+1);
            }
        }
        freq[a[i]]++;
    }
    cout<<res.size()<<endl;
    for(int i:res){
        cout<<i<<' ';
    }
    cout<<endl;
    return 0;
}