#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
vector<int> a[1001];
int visited[1001];
void nhap(){
	cin >> n >>m ;
	for(int i=0 ; i< m ; i++){
		int x,y;
		cin >> x >> y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	for(int i=1 ; i<=n ; i++){
		sort(a[i].begin(),a[i].end());
	}
}
void DFS(int u){
	visited[u]=1;
	for(int x : a[u]){
		if(visited[x]==0){
			DFS(x);
		}
	}
}
int main(){
	nhap();
	int ans=0;
	for(int i=1 ; i<=n ; i++){
		if(visited[i]==0){
			ans++;
			DFS(i);
		}
	}
	cout << ans << endl;
}
