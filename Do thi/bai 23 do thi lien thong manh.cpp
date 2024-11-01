#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
vector<int> a[1001];
int visited[1001];
void nhap(){
	cin >> n >> m;
	for(int i=0 ; i<m ; i++){
		int x,y; cin >> x >> y;
		a[x].push_back(y);
	}
}
void dfs(int u){
	visited[u]=1;
	for(int v : a[u]){
		if(visited[v]==0){
			dfs(v);
		}
	}
}
int main(){
	nhap();
	for(int i=1 ; i<=n ; i++){
		memset(visited,0,sizeof(visited));
		if(visited[i]==0){
			dfs(i);
		}
		for(int i=1 ; i<= n ; i++){
			if(visited[i]==0){
				cout << 0 << endl;
				return 0;
			}
		}
	}
	cout << 1 << endl;
}
