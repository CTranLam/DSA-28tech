#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
int visited[1001];
vector<int> a[1001];
vector<int> topo;
void inp(){
	cin >> n >> m;
	for(int i=0 ; i<m ; i++){
		int x,y;
		cin >> x >> y;
		a[x].push_back(y);
	}
}
void dfs(int u){
	visited[u]=1;
	for(int x : a[u]){
		if(!visited[x]){
			dfs(x);
		}
	}
	topo.push_back(u);
}
//7 7
//1 2
//2 3
//2 4
//3 5
//4 5
//1 6
//7 6

int main(){
	inp();
	for(int i=1; i<=n ; i++){
		if(!visited[i]){
			dfs(i);
		}
	}
	reverse(topo.begin() , topo.end());
	for(int x : topo){
		cout << x <<" ";
	}
}
