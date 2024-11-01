#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
int timer=0,scc=0; // so thanh phan lien thong
vector<int> adj[1005];
int disc[1005],low[1005]; // luu thoi gian bat dau va thoi gian min
int visited[1005],in_stack[1005];// danh dau xem no con trong ngan xep khong
stack<int> st;
void nhap(){
	cin >> n >> m;
	for(int i=0 ; i<m ; i++){
		int x,y; cin >> x >> y;
		adj[x].push_back(y);
	}
}
void DFS(int u){
	disc[u]=low[u]=++timer;
	visited[u]=1;in_stack[u]=1;
	st.push(u); // them vao cuoi se duoc duyet dau 
	for(int v : adj[u]){
		if(!visited[v]){
			DFS(v);
			low[u]=min(low[u],low[v]); // backtrack 
		}
		else if(in_stack[v]){
			low[u]=min(low[u],disc[v]);
		}
	}
	if(low[u]==disc[u]){
		// la nhung dinh bat dau cua 1 thanh phan lien thong manh
		++scc;
		while(st.top() != u){
			cout << st.top() <<" ";
			st.pop();
		}
		cout << st.top() <<endl;
		st.pop();
	}
}
//7 8
//1 2
//2 3
//3 1
//3 4 
//4 5
//5 6
//6 7
//7 5

int main(){
	nhap();
	for(int i=1 ; i<=n; i++){
		if(!visited[i]){
			DFS(i);
		}
	}
	cout << scc << endl;
}
