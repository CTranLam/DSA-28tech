#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m,s;
vector<int> ke[2005];
int visited[2005];
vector<int> MST;
void init(){
	cin >> n >> m >> s;
	for(int i=0 ; i<m ; i++){
		int x,y;
		cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	for(int i=1 ; i<=n ; i++){
		sort(ke[i].begin(),ke[i].end());
	}
}
void dfs(int u){
	visited[u]=1;
	for(int x : ke[u]){
		if(!visited[x]){
			cout << u <<"->" << x << endl;
			dfs(x);
		}
	}
}
int main(){
	init();
	dfs(s);
}
