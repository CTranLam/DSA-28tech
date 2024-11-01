#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
int sz[20005];
int parent[20005];
int find(int u){
	if(u==parent[u]) return u;
	else{
		return parent[u]=find(parent[u]);
	}
}
int Union(int u ,int v){
	int x=find(u);
	int y=find(v);
	if(x==y) return 0;
	if(sz[x]<sz[y]){
		sz[y]+=sz[x];
		parent[x]=y;
	} 
	else{
		sz[x]+=sz[y];
		parent[y]=x;
	}
	return 1;
}
int main(){
	cin >> n >>m;
	for(int i=1 ; i<=n ; i++){
		sz[i]=1;
		parent[i]=i;
	}
	if(m!=n-1){
		cout << 0 << endl;
		return 0;
	}
	for(int i=0 ; i<m ; i++){
		int x,y;
		cin >> x >> y;
		if(!Union(x,y)){ // lam xuat hien chu trinh
			cout << 0 << endl;
			return 0;
		}
	}
	cout << 1 << endl;
}
