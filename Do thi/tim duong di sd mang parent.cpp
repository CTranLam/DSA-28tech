#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m,s,t;
vector<int> a[1001];
int visited[1001];
int parent[1001];// mang cha
void DFS(int u){
	visited[u]=1;
	for(int v : a[u]){
		if(!visited[v]){
			parent[v]=u; // cha cua v la u
			visited[v]=1;
			DFS(v);
		}	
	}
}
void path(int s ,int t){
	// tim duong di tu dinh s den dinh t
	DFS(s);
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
