#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
vector<int> ke[200005];
int visited[200005];
int vao[200005];
int dem=0;
int parent[200005];
vector<pair<int,int>> dsc;
void init(){
	cin >> n >> m;
	for(int i=0 ; i<m ; i++){
		int x,y;
		cin >> x>> y;
		dsc.push_back({x,y});
		ke[x].push_back(y);
		vao[y]++;
		ke[y].push_back(x);
		vao[x]++;
	}
	for(int i=1 ; i<=n ; i++){
		parent[i]=i;
	}
}
int find(int u){
	if(parent[u]==u) return u;
	return parent[u]=find(parent[u]);
}
void Union(int u,int v){
	int x=find(u);
	int y=find(v);
	if(x==y) return;
	if(vao[x]>vao[y] ||(vao[x]==vao[y] && x < y)){
		parent[y]=x;
	}
	else{
		parent[x]=y;
	}
}
int main(){
	init();
	for(pair<int,int> it : dsc){
		Union(it.first,it.second);
	}
	for(int i=1 ; i<=n ; i++){
		if(i==parent[i]){
			cout << i << " ";
		}
	}
}
