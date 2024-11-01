#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
vector<int> ke[200005];
int visited[200005];
int vao[200005];
int dem=0;
int gr[200005];
void init(){
	cin >> n >> m;
	for(int i=0 ; i<m ; i++){
		int x,y;
		cin >> x>> y;
		ke[x].push_back(y);
		vao[y]++;
		ke[y].push_back(x);
		vao[x]++;
	}
}
int cnt=0;
void dfs(int u){
	cnt++;
	gr[u]=dem;
	visited[u]=1;
	for(int v : ke[u]){
		if(!visited[v]){
			dfs(v);
		}
	}
}
int main(){
	init();
	set<int> leader;
	for(int i=1 ; i<=n ; i++){
		cnt=0;
		if(!visited[i]){
			++dem;
			dfs(i);
		}
		if(cnt==1){
			leader.insert(i);
		}
		int max_v=0,cur=-1;
		for(int i=1; i<=n ; i++){
			if(gr[i]==dem){
				if(max_v<vao[i]){
					max_v=vao[i];
					cur=i;
				}
			}
		}
		if(cur != -1){
			leader.insert(cur);
		}
	}
	for(int x : leader){
		cout << x <<" ";
	}
}
