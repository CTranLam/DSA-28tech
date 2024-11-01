#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int s,t,u,v;
int a[1001][1001];
int d[1001][1001];// luu so buoc toi thieu den o i,j
int visited[1001][1001];
void nhap(){
	cin >> n >> s >> t >> u >> v;
	for(int i=1 ; i<=n; i++){
		for(int j=1 ; j<=n ; j++){
			cin >> a[i][j];
		}
	}
}
int dx[8]={-2,-2,2,2,-1,-1,1,1};
int dy[8]={1,-1,1,-1,2,-2,2,-2};
int bfs(int i,int j){
	visited[i][j]=1;
	queue<pair<int,int>> q;
	q.push({i,j});
	while(!q.empty()){
		pair<int,int> p=q.front();
		q.pop();
		if(p.first==u && p.second==v){
			return d[u][v];
		}
		for(int k=0 ; k<8 ; k++){
			int i1=p.first+dx[k];
			int j1=p.second+dy[k];
			if(i1>=1 && i1<=n && j1>=1 && j1<=n && a[i1][j1]==1 && visited[i1][j1]==0){
				q.push({i1,j1});
				visited[i1][j1]=1;
				d[i1][j1]=d[p.first][p.second]+1;
			}
		}
	}
	return -1 ;
}
int main(){
	nhap();
	int cnt;
	cout << bfs(s,t) << endl;
}
