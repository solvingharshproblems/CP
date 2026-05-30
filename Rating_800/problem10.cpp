#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
vector<vector<int>> score={
    {1,1,1,1,1,1,1,1,1,1},
    {1,2,2,2,2,2,2,2,2,1},
    {1,2,3,3,3,3,3,3,2,1},
    {1,2,3,4,4,4,4,3,2,1},
    {1,2,3,4,5,5,4,3,2,1},
    {1,2,3,4,5,5,4,3,2,1},
    {1,2,3,4,4,4,4,3,2,1},
    {1,2,3,3,3,3,3,3,2,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,1,1,1,1,1,1,1,1,1}
};
void solve(){
    vector<vector<char>> a(10,vector<char>(10));
    for(int i=0;i<10;i++){
        string s;
        cin>>s;
        for(int j=0;j<10;j++){
            a[i][j]=s[j];
        }
    }
    int res=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(a[i][j]=='X'){
                res+=score[i][j];
            }
        }
    }
    cout<<res<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve();
}