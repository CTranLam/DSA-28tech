#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
int parent[200005];
int sz[200005];
void init(){
	cin >> n >>m;
	for(int i=1 ; i<=n ; i++){
		parent[i]=i;
		sz[i]=1;
	}
}
int Find(int u){
	if(u==parent[u]) return u;
	return parent[u]=Find(parent[u]);
}
int Union(int a,int b){
	int x=Find(a);
	int y=Find(b);
	if(x==y) return 0;
	else if(sz[x]>sz[y]){
		parent[y]=x;
		sz[x]+=sz[y];
	}
	else{
		parent[x]=y;
		sz[y]+=sz[x];
	}
	return 1;
}
int main(){
	init();
	for(int i=0 ; i<m ; i++){
		int x,y;
		cin >> x >> y;
		if(!Union(x,y)){
			cout << "NO" << endl;
			return 0;
		}
	}
	cout <<"YES" << endl;
}
