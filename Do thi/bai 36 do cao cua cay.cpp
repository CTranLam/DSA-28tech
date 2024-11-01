#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
vector<int> ke[20005];
int visited[20005];
int d[20005];
int cnt;
void init(){
	cin >> n;
	for(int i=1 ; i<=n ; i++){
		int x,y;
		cin >> x >> y;
		ke[y].push_back(x);
		ke[x].push_back(y);
	}
}
void dfs(int u){
	visited[u]=1;
	for(int x : ke[u]){
		if(!visited[x]){
			d[x]=d[u]+1;
			dfs(x);
		}
	}
}
int main(){
	init();
	d[1]=0;
	dfs(1);
	for(int i=1 ; i<=n ; i++){
		cout << d[i] <<" ";
	}
}
