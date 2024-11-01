#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
char a[1001][1001];
int visited[1001][1001];
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
void dfs(int i,int j){
	visited[i][j]=1;
	for(int k=0 ; k<4 ; k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=1 && i1<=n && j1>=1 && j1<=m && a[i1][j1]=='x' && visited[i1][j1]==0){
			dfs(i1,j1);
		}
	}
}
void bfs(int i,int j){
	a[i][j]='o';
	queue<pair<int,int>> q;
	q.push({i,j});
	while(!q.empty()){
		pair<int,int> v=q.front();
	    q.pop();
		for(int k=0 ; k<4 ; k++){
			int i1=v.first+dx[k];
			int j1=v.second+dy[k];
			if(i1>=1 && i1<=n && j1>=1 && j1<=m && a[i1][j1]=='x'){
				q.push({i1,j1});
				a[i1][j1]='o';
			}
		}
	}
}
int main(){
	cin >> n >> m;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
			cin >> a[i][j];
		}
	}
	int ans1=0;
	int ans2=0;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
			if(a[i][j]=='x' && visited[i][j]==0){
				++ans1;
				dfs(i,j);
			}
		}
	}
	cout << ans1 << endl;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
			if(a[i][j]=='x'){
				++ans2;
				bfs(i,j);
			}
		}
	}
	cout << ans2 << endl;
}
