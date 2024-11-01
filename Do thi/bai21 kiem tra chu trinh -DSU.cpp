#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
vector<int> ke[20005];
int visited[20005];
int parent[20005];
int sz[20005];
void init(){
	cin >> n >> m;
	for(int i=1 ; i<=n ; i++){
		parent[i]=i;
		sz[i]=1;
	}
}
int find(int u){
	if(u==parent[u]) return u;
	else{
		return parent[u]=find(parent[u]);
	}
}
int Union(int u,int v){
	int x=find(u);
	int y=find(v);
	if(x==y) return 0;// cung 1 nhom roi
	else if(sz[x] < sz[y]){
		parent[x]=y;
		sz[y]+=sz[x];
	}
	else{
		parent[y]=x;
		sz[x]+=sz[y];
	}
	return 1;
}
int main(){
	init();
	for(int i=0 ; i<m ; i++){
		int x,y;
		cin >> x >> y;
		if(!Union(x,y)){
			cout << 1 << endl;
			return 0;
		}
	}
	cout << 0 << endl;
}
