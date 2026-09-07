#include <bits/stdc++.h>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> a(10,0);
    for(int i=0;i<=9;i++){
        for(int j=0;j<=9;j++){
            for(int k=0;k<=9;k++){
                if(i+j+k<10){
                    a[i+j+k]++;
                }
            }
        }
    }
    int t=1;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        long long res=1;
        for(char c:s){
            res*=a[c-'0'];
        }
        cout<<res<<endl;
    }
}