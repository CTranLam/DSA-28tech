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
void DFS(int u){
	cout << u <<" ";
	visited[u]=1;
	for(int v : a[u]){
		if(!visited[v]){
			DFS(v);
		}
	}
}
int main(){
	nhap();
	DFS(1);
}
