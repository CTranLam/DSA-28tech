#include<bits/stdc++.h>
using namespace std;
vector<int> ke[20005];
int visited[20005];
int n,m,timer;
int dis[2005],low[2005];
void init(){
	cin >> n >> m;
	for(int i=1 ; i<=m ; i++){
		int x,y;
		cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
}
int cnt=0;
void dfs(int u,int par){
	dis[u]=low[u]=++timer;
	visited[u]=1;
	for(int v : ke[u]){
		if(v==par) continue;
		else if(!visited[v]){
			dfs(v,u);
			low[u]=min(low[u],low[v]); // relax
			if(dis[u] < low[v]){ // trong th dis[u]=low[v] thi no la dinh tru nhung k phai canh cau
				++cnt; 
			}
		}
		else{
			low[u]=min(low[u],dis[v]);
		}
	}
}
int main(){
	init();
	for(int i=1 ; i<=n ; i++){
		if(!visited[i]){ // neu dt co nhieu tplt
			dfs(i,-1);
		}
	}
	cout << cnt << endl;
}
