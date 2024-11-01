#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
vector<int> ke[200005];
int visited[200005];
int vao[200005];
int dem=0;
int gr[200005];
void init(){
	cin >> n >> m;
	for(int i=0 ; i<m ; i++){
		int x,y;
		cin >> x>> y;
		ke[x].push_back(y);
		vao[y]++;
		ke[y].push_back(x);
		vao[x]++;
	}
}
int nhom_truong=0;
void dfs(int u){
	visited[u]=1;
	if(vao[u] > vao[nhom_truong] || (vao[u]==vao[nhom_truong] && u<nhom_truong)){
		nhom_truong = u;
	}
	for(int v : ke[u]){
		if(!visited[v]){
			dfs(v);
		}
	}
}
int main(){
	init();
	set<int> leader;
	for(int i=1 ; i<=n ; i++){
		if(!visited[i]){
			nhom_truong=i;
			dfs(i);
			leader.insert(nhom_truong);
		}
	}
	for(int x : leader){
		cout << x <<" ";
	}
}
