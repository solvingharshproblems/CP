#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
bool isMinOrMax(int val,set<int> &s) {
    if((*s.begin())==val){
        return true;
    }
    if((*s.rbegin())==val){
        return true;
    }
    return false;
}
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    set<int> s(arr.begin(),arr.end());
    int i=0,j=n-1;
    while(i<j){
        if(isMinOrMax(arr[i],s)){
            s.erase(arr[i]);
            i++;
            continue;
        }
        if(isMinOrMax(arr[j],s)){
            s.erase(arr[j]);
            j--;
            continue;
        }
        break;
    }
    if(i<j){
        cout<<(i+1)<<" "<<(j+1)<<endl;
    } 
    else{
        cout<<"-1"<<endl;
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}