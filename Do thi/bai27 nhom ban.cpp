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
int cnt=0;
void dfs(int u){
	++cnt;
	visited[u]=1;
	for(int v : ke[u]){
		if(!visited[v]){
			dfs(v);
		}
	}
}
int main(){
	init();
	int ans=0;
	for(int i=1 ; i<=n ; i++){
		cnt=0;
		if(!visited[i]){
			dfs(i);
		}
		ans=max(ans,cnt);
	}
	cout << ans << endl;
}
