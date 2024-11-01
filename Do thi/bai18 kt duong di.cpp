#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m,dem;
int tplt[200005]; //danh dau dinh nay thuoc thanh phan lien thong thu may
vector<int> a[1001];
int visited[1001];
void nhap(){
	cin >> n >>m ;
	for(int i=0 ; i< m ; i++){
		int x,y;
		cin >> x >> y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	for(int i=1 ; i<=n ; i++){
		sort(a[i].begin(),a[i].end());
	}
}
void DFS(int u){
	tplt[u]=dem;
	visited[u]=1;
	for(int x : a[u]){
		if(visited[x]==0){
			DFS(x);
		}
	}
}
int main(){
	nhap();
	for(int i=1 ; i<=n ; i++){
		if(!visited[i]){
			++dem;
			DFS(i);
		}
	}
	int t; cin >> t;
	while(t--){
		int u,v; cin >> u >> v;
		if(tplt[u]==tplt[v]) cout << 1 << endl;
		else cout << -1 << endl;
	}
}
