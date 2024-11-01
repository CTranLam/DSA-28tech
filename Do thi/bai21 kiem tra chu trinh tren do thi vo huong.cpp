#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m; 
vector<int> a[1001];
int visited[1001];
int parent[1001];
void nhap(){
	cin >> n >> m;
	for(int i=0 ; i<m ; i++){
		int x,y;
		cin >> x >> y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
}
bool dfs(int u){
	visited[u]=1;
	for(int v : a[u]){
		if(visited[v]==1 && v != parent[u]){
			return true;// co chu trinh, k dc return luon neu k tim thay do co the nhanh khac co
		}
		else if(!visited[v]){
			parent[v]=u;
			if(dfs(v)) return true;
		}
	}
	return false;
}
int main(){
	nhap();
	for(int i=1 ; i<=n ; i++){
		if(!visited[i]){
			if(dfs(i)){
				cout << 1 << endl;
				return 0;
			}
		}
	}
	cout << 0 << endl;
	return 0;
}
