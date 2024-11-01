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
		a[y].push_back(x);// neu la do thi co huong thi bo
	}
	// chon duyet cac dinh be trc
	for(int i=1 ; i<=n ; i++){
		sort(a[i].begin(),a[i].end());
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
	DFS(s);
}
