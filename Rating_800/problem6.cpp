#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int> freq;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    if(freq.size()>=3){
        cout<<"No"<<endl;
    }
    else{
        int freq1=freq.begin()->second;
        int freq2=freq.rbegin()->second;
        if(freq1==freq2){
            cout<<"Yes"<<endl;
        }
        else if(n%2==1 && abs(freq1-freq2)==1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}