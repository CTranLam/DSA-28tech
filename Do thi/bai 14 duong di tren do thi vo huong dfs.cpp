#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m,s,t;
vector<int> a[1001];
int visited[1001];
int parent[1001];

void nhap(){
	cin >> n >>m >> s >> t;
	for(int i=0 ; i<m ; i++){
		int x,y;
		cin >> x >> y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	for(int i=1 ; i<=n ; i++){
		sort(a[i].begin(),a[i].end());
	}
}
void dfs(int u){
	visited[u]=1;
	for(int v : a[u]){
		if(!visited[v]){
			dfs(v);
			parent[v]=u;
		}
	}
}
int main(){
	nhap();
	dfs(s);
	if(visited[t]==0){
		cout << -1 << endl;
	}
	else{
		vector<int> ans;
		while(s != t){
			ans.push_back(t);
			t=parent[t];
		}
		ans.push_back(t);
		reverse(ans.begin(),ans.end());
		for(int x : ans){
			cout << x <<" "; 
		}
	}
}
