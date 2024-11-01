#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
int parent[100001], sz[100001];

void init(){
    for(int i = 1; i <= n; i++){
        parent[i] = i;
        sz[i] = 1;
    }
}
int Find(int u){
    if(u == parent[u])
        return u;
    return parent[u] = Find(parent[u]);
}
int ans=0;
bool Union(int x, int y){
    x = Find(x);
    y = Find(y);
    if(x == y) return false;
    if(sz[x] < sz[y]){
        parent[x] = y;
        sz[y] += sz[x];
        ans=max(ans,sz[y]);
    }
    else{
        parent[y] = x;
        sz[x] += sz[y];
        ans=max(ans,sz[x]);
    }
    return true;
}
int main(){
	cin >> n >> m;
	init();
	int group=n;
	for(int i=0 ; i<m ; i++){
		int x,y; cin >> x >> y;
		if(Union(x,y)){
			--group;
			cout << group <<" "<< ans << endl;
		}
	}
}
