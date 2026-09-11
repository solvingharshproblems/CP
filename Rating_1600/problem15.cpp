#include <bits/stdc++.h>
using namespace std;
void dfs(int x,vector<vector<int>> &adj,vector<int> &color,bool &pos){
	if(!pos){
        return;
	}
	for(auto y:adj[x]){
		if(color[y]!=-1){
			if(color[y]==color[x]){
				pos=false;
				return;
			}
			continue;
		}
		color[y]=1-color[x];
		dfs(y,adj,color,pos);
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int tc;
	cin>>tc;
	while(tc--){
		int n;
		cin>>n;
		vector<vector<int>> arr(n);
		vector<pair<int,int>> domino(n);
		for(int i=0;i<n;i++){
			cin>>domino[i].first>>domino[i].second;
			arr[domino[i].first-1].push_back(i);
			arr[domino[i].second-1].push_back(i);
		}
		bool pos=true;
		vector<vector<int>> adj(n);
		for(int v=0;v<n;v++){
			if(arr[v].size()>2){
				pos=false;
				break;
			}
			if(arr[v].size()==2){
				int a=arr[v][0],b=arr[v][1];
				adj[a].push_back(b);
				adj[b].push_back(a);
			}
		}
		if(!pos){
			cout<<"NO\n";
			continue;
		}
		vector<int> color(n,-1);
		for(int i=0;i<n && pos;i++){
			if(color[i]!=-1){
                continue;
            }
			color[i]=0;
			dfs(i,adj,color,pos);
		}
		cout<<(pos?"YES\n":"NO\n");
	}
	return 0;
}