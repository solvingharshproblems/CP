#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string res="";
    for(char c='a';c<='z';c++){
        if(s.find(c)==string::npos){
            res=c;
            break;
        }
    }
    if(res==""){
        bool found=false;
        for(char c1='a';c1<='z' && !found;c1++){
            for(char c2='a';c2<='z';c2++){
                string temp="";
                temp.push_back(c1);
                temp.push_back(c2);
                if(s.find(temp)==string::npos){
                    res=temp;
                    found=true;
                    break;
                }
            }
        }
    }
    if(res==""){
        bool found=false;
        for(char c1='a';c1<='z' && !found;c1++){
            for(char c2='a';c2<='z' && !found;c2++){
                for(char c3='a';c3<='z';c3++){
                    string temp="";
                    temp.push_back(c1);
                    temp.push_back(c2);
                    temp.push_back(c3);
                    if(s.find(temp)==string::npos){
                        res=temp;
                        found=true;
                        break;
                    }
                }
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