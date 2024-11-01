#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m,s;
int visited[1001];
vector<int> a[1001];
void nhap(){
	cin >> n >> m>> s;
	for(int i=0 ; i<m ; i++){
		int x,y;
		cin >> x >> y;
		a[x].push_back(y);
//		a[y].push_back(x);// neu la do thi co huong thi bo
	}
	// chon duyet cac dinh be trc
	for(int i=1 ; i<=n ; i++){
		sort(a[i].begin(),a[i].end());
	}
}
void bfs(int u){
	visited[u]=1;
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int v=q.front();
		cout << v <<" ";
		q.pop();
		for(int x : a[v]){
			if(!visited[x]){
				q.push(x);
				visited[x]=1;
			}
		}
	}
}
int main(){
	nhap();
	bfs(s);
}
