#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m,s,t;
vector<int> ke[1001]; // danh sach ke
vector<pair<int,int>> dsc;
int visited[1001];
// c2 k xet 2 dinh cua canh day
void nhap(){
	cin >> n >> m;
	for(int i=0 ; i<m ; i++){
		int x,y;
		cin >> x >> y;
		dsc.push_back({x,y});
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
}
void dfs(int u,int x,int y){
	visited[u]=1;
	for(int v : ke[u]){
		if((x==u && y==v) || (x==v && y==u)){
			continue;// k xet 2 dinh cua canh
		}
		if(!visited[v]) dfs(v,x,y);
	}
}
int main(){
	nhap();
	int cnt=0; // dem tplt
	for(int i=1 ; i<=n ; i++){
		if(!visited[i]){
			++cnt;
			dfs(i,-1,-1);
		}
	}
	int canhcau=0;
	for(auto it : dsc){
		int x=it.first,y=it.second;
		memset(visited,0,sizeof(visited));
		int dem=0;
		for(int i=1 ; i<=n ; i++){
			if(!visited[i]){
				dfs(i,x,y);
				++dem;
			}
		}
		if(dem>cnt) ++canhcau;
	}
	cout << canhcau << endl;
}
