#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> ke[20005];
int n,m;
int sz[20005];
int dfs(int u){
	int res=1;
	for(int v : ke[u]){
		res+=dfs(v);
	}
	return sz[u]=res;
}
int main(){
	cin >> n >> m;
	for(int i=0 ; i<m ; i++){
		int x,y;
		cin >> x >> y;
		ke[x].push_back(y);
	}
	dfs(1);
	for(int i=1 ; i<=n ; i++){
		cout << i <<" "<< sz[i] << endl;
	}
}
