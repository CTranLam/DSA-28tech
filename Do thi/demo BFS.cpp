#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m; 
int visited[1001];
vector<int> a[1001];
void nhap(){
	cin >> n >> m;
	for(int i=0 ; i<m ; i++){
		int x,y;
		cin >> x >> y;
		a[x].push_back(y);
		a[y].push_back(x);// neu la do thi co huong thi bo
	}
}
void BFS(int u){
	queue<int> q;
	visited[u]=1;
	q.push(u);
	while(!q.empty()){
		int v=q.front();
		cout << v <<" ";
		q.pop();
		for(int x : a[v]){
			if(!visited[x]){
				visited[x]=1;
				q.push(x);
			}
		}
	}
}
int main(){
	nhap();
	BFS(1);
}
