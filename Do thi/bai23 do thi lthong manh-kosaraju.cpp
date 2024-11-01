#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
vector<int> ke[20005];
vector<int> t_ke[20005];
int visited[20005];
stack<int> st;
void init(){
	cin >> n >>m;
	for(int i=1 ; i<=m ; i++){
		int x,y;
		cin >> x >> y;
		ke[x].push_back(y);
		t_ke[y].push_back(x);
	}
}
void dfs1(int u){
	visited[u]=1;
	for(int x : ke[u]){
		if(!visited[x]){
			dfs1(x);
		}
	}
	st.push(u); // xong dau tien thi them vao dau tien
}
void dfs2(int u){
	visited[u]=1;
	for(int x : t_ke[u]){
		if(!visited[x]){
			dfs2(x);
		}
	}
}
vector<int> v;
void kosaraju(){
	for(int i=1 ; i<=n ; i++){
		if(!visited[i]){
			dfs1(i);
		}
	}
	memset(visited,0,sizeof(visited));
	int cnt=0;
	while(!st.empty()){
		int u=st.top();
		st.pop();
		if(!visited[u]){
			++cnt;
			dfs2(u);
		}
	}
	if(cnt ==1 ){
		cout << 1 << endl;
	}
	else cout << 0 << endl;
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
// do thi lien thong manh khi tu 1 dinh di den duoc moi dinh
// vi vay nen xet neu xet duoc 1 thanh phan lien thong manh thi do thi do lien thong manh

int main(){
	init();
	kosaraju();
}
