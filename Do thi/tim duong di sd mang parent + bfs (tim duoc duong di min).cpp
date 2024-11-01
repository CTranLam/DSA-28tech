#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m,s,t;
vector<int> a[1001];
int visited[1001];
int parent[1001];// mang cha
void bfs(int u){
	queue<int> q;
	q.push(u);
	visited[u]=1;
	while(!q.empty()){
		int v=q.front();
		q.pop();
		for(int x : a[v]){
			if(!visited[x]){
				parent[x]=v; // cha cua x la v
				visited[x]=1;
				q.push(x);
			}
		}
	}
}
void path(int s ,int t){
	// tim duong di tu dinh s den dinh t
	bfs(s);
	if(!visited[t]) cout << "Khong co duong di";
	else{
		vector<int> ans;
		while(s!=t){
			ans.push_back(t);
			t=parent[t];
		}
		ans.push_back(s);
		reverse(ans.begin(),ans.end());
		for(int x : ans){
			cout << x <<" ";
		}
	}
}
//10 8
//1 2 
//2 3
//2 4
//3 6
//3 7 
//6 7
//5 8
//8 9
int main(){
	cin >> n >> m;
	for(int i=0 ; i<m ; i++){
		int x,y; cin >> x >> y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	cin >> s >> t;
	path(s,t);
}
