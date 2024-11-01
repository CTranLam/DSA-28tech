#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
vector<int> ke[200005];
int visited[200005];
int vao[20005];
int gr[20005];
void init(){
	cin >> n >> m;
	for(int i=0 ; i<m ; i++){
		int x,y;
		cin >> x>> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
		vao[x]++;
		vao[y]++;
	}
}
int cnt=0,dem=0;
void dfs(int u){
	++cnt;
	visited[u]=1;
	gr[u]=dem;
	for(int v : ke[u]){
		if(!visited[v]){
			dfs(v);
		}
	}
}
int main(){
	init();
	ll res=0;
	for(int i=1 ; i<=n ; i++){
		if(!visited[i]){
			cnt=0;
			dem++;
			dfs(i);
			for(int i=1 ; i<=n ; i++){
				if(gr[i]==dem && vao[i] != cnt-1){
					cout <<"NO";
					return 0;
				}
			}
		}
	}
	cout << "YES" << endl;
}

