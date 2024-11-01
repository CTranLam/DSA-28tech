//6 6
//x x x o o o
//o o x o o o
//o x x x x o
//o o o o o x
//x x o x o x
//x o x x o x
//m tim duong di ngan nhat tu s,t den u,v sd bfs
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m,s,t,u,v;
char a[1001][1001];
int visited[1001][1001];
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
int d[1001][1001];// luu so buoc di toi thieu dung bfs
void bfs(int i,int j){
	queue<pair<int,int>> q;
	q.push({i,j});
	visited[i][j]=1;
	d[i][j]=0;
	while(!q.empty()){
		pair<int,int> v=q.front();
		cout << v.first <<" "<<v.second<< endl;
		q.pop();
		for(int k=0 ; k<4 ; k++){
			int i1=v.first+dx[k];
			int j1=v.second+dy[k];
			if(i1>=1 && i1 <= n && j1>=1 && j1<=m && a[i1][j1] =='o' && visited[i1][j1]==0){
				d[i1][j1]=d[v.first][v.second]+1;
				q.push({i1,j1});
				visited[i1][j1]=1;
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
	cin >> s >> t;
	cin >> u >> v;
	a[s][t]=a[u][v]='o';
	bfs(s,t);
	cout << d[u][v] << endl;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
			cout << d[i][j] <<" ";
		}
		cout << endl;
	}
}
