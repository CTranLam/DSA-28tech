#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
vector<int> a[1001];
int visited[1001];
int inp(){
	cin >> n >> m;
	for(int i=0 ; i<m ; i++){
		int x,y; cin >> x >>y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
}
bool DFS(int u, int par){
	visited[u]=1;
	for(int v : a[u]){
		if(!visited[v]){
			if(DFS(v,u)) return 1;
		}
		else if(v != par) return 1; // do thi co chu trinh
	}
	return 0;
}
int main(){
	inp();
	for(int i=1 ; i<=n ; i++){
		if(!visited[i]){
			if(DFS(i,0)){
				cout <<"YES\n";
				return 0;
			}
		}
	}
	cout << "NO\n" << endl;
}
