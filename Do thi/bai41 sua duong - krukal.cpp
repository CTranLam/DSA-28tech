#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
int sz[200005];
int parent[200005];
struct canh{
	int a,b,c;
};
vector<canh> dscanh;
void init(){
	cin >> n >>m;
	for(int i=1 ; i<=n ; i++){
		parent[i]=i;
		sz[i]=1;
	}
	for(int i=1 ; i<=m ; i++){
		int a,b,c;
		cin >> a >> b >> c;
		dscanh.push_back({a,b,c});
	}
}
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
int cmp(canh x,canh y){
	return x.c < y.c; 
}
void krukal(){
	sort(dscanh.begin(),dscanh.end(),cmp);
	vector<canh> ans;// luu dsc tren cay khung ctieu
	ll res=0;
	for(int i=0 ; i<m ; i++){
		int a=dscanh[i].a,b=dscanh[i].b,c=dscanh[i].c;
		if(Union(a,b)){
			ans.push_back({a,b,c});
			res+=c;
		}
		if(ans.size()==n-1){
			break;
		}
	}
	if(ans.size()==n-1){
		cout << res << endl;
	}
	else{
		cout << "IMPOSSIBLE" << endl;
	}
}
int main(){
	init();
	krukal();
}
