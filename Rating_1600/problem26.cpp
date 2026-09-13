#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> res(n);
    stack<int> st;
    unordered_set<int> us;
    for(int i=0;i<n;i++){
        st.push(i);
        us.insert(i+1);
    }
    while(st.size()>=2){
        int x=st.top();
        st.pop();
        int y=st.top();
        st.pop();
        cout<<"? "<<x+1<<" "<<y+1<<endl;
        int a1;
        cin>>a1;
        cout<<"? "<<y+1<<" "<<x+1<<endl;
        int a2;
        cin>>a2;
        us.erase(max(a1,a2));
        if(a1>a2){
            res[x]=a1;
            st.push(y);
        } 
        else{
            res[y]=a2;
            st.push(x);
        }
    }
    int v=*us.begin();
    res[st.top()]=v;
    cout<<"! ";
    for(auto x:res){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}