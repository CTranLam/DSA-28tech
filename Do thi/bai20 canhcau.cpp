#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m,s,t;
set<int> ke[1001]; // danh sach ke
vector<pair<int,int>> dsc;
int visited[1001];
// c1 bo1 canh di
void nhap(){
	cin >> n >> m;
	for(int i=0 ; i<m ; i++){
		int x,y;
		cin >> x >> y;
		dsc.push_back({x,y});
		ke[x].insert(y);
		ke[y].insert(x);
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
	nhap();
	int cnt=0; // dem tplt
	for(int i=1 ; i<=n ; i++){
		if(!visited[i]){
			++cnt;
			dfs(i);
		}
	}
	int canhcau=0;
	for(auto it : dsc){
		int x=it.first,y=it.second;
		memset(visited,0,sizeof(visited));
		// xoa 2 dinh khoi danh sach ke
		ke[x].erase(y);
		ke[y].erase(x);
		int dem=0;
		for(int i=1 ; i<=n ; i++){
			if(!visited[i]){
				dfs(i);
				++dem;
			}
		}
		ke[x].insert(y);
		ke[y].insert(x);
		if(dem>cnt) ++canhcau;
	}
	cout << canhcau << endl;
}
