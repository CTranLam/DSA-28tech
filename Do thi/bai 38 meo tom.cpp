#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
vector<int> ke[20005];
int visited[20005];
int cnt=0;
int cur[20005]; // danh dau vi tri con gian
void init(){
	cin >> n >> m;
	for(int i=1 ; i<=n ; i++){
		int x; cin >> x;
		if(x==1) cur[i]=1;
		else cur[i]=0;
	}
	for(int i=0 ; i<n-1; i++){
		int x,y;
		cin >> x >> y;
		ke[x].push_back(y);
	}
}
void dfs(int u,int gian){
	if(gian > m){
		return;
	}
	int ok=0;
	for(int x : ke[u]){
		if(cur[x]==1){
			dfs(x,gian+1);
		}
		else dfs(x,0);
		ok=1;
	}
	if(!ok) ++cnt;
}
int main(){
	init();
	dfs(1,cur[1]);
	cout << cnt << endl;
}
