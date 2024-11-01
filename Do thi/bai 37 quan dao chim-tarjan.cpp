#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
vector<int> ke[2005];
int dis[2005],low[2005];
int timer;
int visited[2005];
void init(){
	cin >> n >> m;
	for(int i=0 ; i<m ; i++){
		int x,y;
		cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
}
int AP[2005];// kiem tra dinh tru
void tarjan(int u,int par){
	visited[u]=1;
	dis[u]=low[u]=++timer;
	int child=0;
	for(int v : ke[u]){
		if(v==par) continue;
		if(!visited[v]){
			tarjan(v,u);
			++child;
			low[u]=min(low[u],low[v]);
			if(par != -1 && dis[u] <=low[v]){
				AP[u]=1;
			}
		}
		else{
			low[u]=min(low[u],dis[v]);
		}
	}
	if(par==-1 && child > 1){
		AP[u]=1;
	}	
}
int main(){
	init();
	for(int i=1 ; i<=n ; i++){
		if(!visited[i]){
			tarjan(i,-1);
		}
	}
	int cnt=0;
	for(int i=1 ; i<=n ; i++){
		if(AP[i]==1){
			++cnt;
		}
	}
	cout << cnt << endl;
}
