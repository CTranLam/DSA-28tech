#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
vector<int> ke[200005];
int visited[200005];
void init(){
	cin >> n >> m;
	for(int i=0 ; i<m ; i++){
		int x,y;
		cin >> x>> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
}
void dfs(int u){
	visited[u]=1;
	for(int v : ke[u]){
		if(!visited[v]){
			dfs(v);
		}
	}
}
int main(){
	init();
	vector<int> ans;
	for(int i=1 ; i<=n ; i++){
		if(!visited[i]){
			ans.push_back(i);
			dfs(i);
		}
	}
	sort(ans.begin(),ans.end());
	cout << ans.size()-1 << endl;
	for(int i=0 ; i<ans.size()-1 ; i++){
		cout << ans[i] <<" "<<ans[i+1] << endl;
	}
}
