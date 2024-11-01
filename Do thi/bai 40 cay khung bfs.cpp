#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m,s;
vector<int> ke[2005];
int visited[2005];
vector<int> MST;
void init(){
	cin >> n >> m >> s;
	for(int i=0 ; i<m ; i++){
		int x,y;
		cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	for(int i=1 ; i<=n ; i++){
		sort(ke[i].begin(),ke[i].end());
	}
}
queue<int> q;
void bfs(int u){
	visited[u]=1;
	q.push(u);
	while(!q.empty()){
		int p=q.front();
		q.pop();
		for(int x : ke[p]){
			if(!visited[x]){
				cout << p <<"->"<<x << endl;
				visited[x]=1;
				q.push(x);
			}
		}
	}
}
int main(){
	init();
	bfs(s);
}
