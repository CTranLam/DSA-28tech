#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char a[1005][1005];
int visited[1005][1005];
int n,m;
void init(){
	cin >> n >>m;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
			cin >> a[i][j];
		}
	}
}
int dx[4]={0,0,-1,1};
int dy[4]={-1,1,0,0};
int cnt;
void dfs(int i,int j){
	++cnt;
	visited[i][j]=1;
	for(int k=0 ; k<4 ; k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=1 && i1<=n && j1>=1 && j1<=m && a[i1][j1]=='.'){
			if(!visited[i1][j1]){
				dfs(i1,j1);
			}
		}
	}
}
int main(){
	init();
	for(int i=1 ; i<=n; i++){
		for(int j=1 ; j<=m ; j++){
			if(a[i][j]=='.' && visited[i][j]==0){
				cnt=0;
				dfs(i,j);
				cout << cnt <<" ";
			}
		}
	}
}