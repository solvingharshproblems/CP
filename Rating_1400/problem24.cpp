#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int odd=0,even=1;
    bool curr=0;
    long long ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            curr=1-curr;
        }
        if(curr==0){
            ans+=even;
            even++;
        } 
        else{
            ans+=odd;
            odd++;
        }
    }
    cout<<1LL*n*(n+1)/2-ans<<' '<<ans<<endl;
    return 0;
}