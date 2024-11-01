#include<bits/stdc++.h>
using namespace std;
vector<int> ke[20005];
int visited[20005];
int n,m,timer;
int dis[2005],low[2005];
int ap[20005];// danh dau cac dinh xem phai dinh tru khong
void init(){
	cin >> n >> m;
	for(int i=1 ; i<=m ; i++){
		int x,y;
		cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
}
void dfs(int u,int par){
	dis[u]=low[u]=++timer;
	visited[u]=1;
	int child=0;// dem so dinh con cua u
	for(int v : ke[u]){
		if(v==par) continue;
		else if(!visited[v]){
			dfs(v,u);
			++child;
			low[u]=min(low[u],low[v]); // relax
			if(par !=-1 && dis[u] <= low[v]){ // 1->2->3->4
				ap[u]=true;
			}
		}
		else{
			low[u]=min(low[u],dis[v]);
		}
	}
	if(par==-1 && child > 1) ap[u]=true; // u la goc cua chu trinh va co nhieu hon 1 con
}
int main(){
	init();
	for(int i=1 ; i<=n ; i++){
		if(!visited[i]){ // neu dt co nhieu tplt
			dfs(i,-1);
		}
	}
	int cnt=0;
	for(int i=1 ; i<=n ; i++){
		if(ap[i]) ++cnt;
	}
	cout << cnt << endl;
}
