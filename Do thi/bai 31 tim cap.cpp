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
	cin >> n;
	for(int i=0 ; i<n-1 ; i++){
		int x,y;
		cin >> x >> y;
		ke[x].push_back(y);
	}
	dfs(1);
	int cnt=0;
	// nhung cap co tinh chat thang tuot la nhung cap tm d(i,j)=d(1,i)-d(1,j)
	for(int i=1 ; i<=n ; i++){
		cnt+=sz[i];
	}
	cout << cnt << endl;
}
