#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
vector<int> ke[20005];
int visited[20005];
int dis[20005],low[20005];
stack<int> st;
int in_stack[20005];
int timer=0;
void init(){
	cin >> n >>m;
	for(int i=0 ; i<m ; i++){
		int x,y;
		cin >> x >> y;
		ke[x].push_back(y);
	}
}
int cnt=0;// dem so luong than phan lien thong manh
void dfs(int u){
	visited[u]=1;
	in_stack[u]=1;
	st.push(u);
	dis[u]=low[u]=++timer;
	for(int x : ke[u]){
		if(!visited[x]){
			dfs(x);
			low[u]=min(low[u],low[x]);
		}
		else if(in_stack[u]){
			low[u]=min(low[u],dis[x]);
		}
	}
	if(dis[u]==low[u]){
		++cnt;
		while(st.top() != u){
			in_stack[st.top()]=0;
			st.pop();
		}
		in_stack[st.top()]=0;
		st.pop();
	}
}
// 49/50
int main(){
	init();
	for(int i=1 ; i<=n ; i++){
		if(!visited[i]){
			dfs(i);
		}
	}
	// chi co 1 thanh phan lthong manh tuc la chi co 1 chu trinh
	// nen tu 1 diem co the di den moi diem
	if(cnt==1)cout << 1 << endl;
	else cout << 0 << endl;
}
