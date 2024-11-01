#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
	int n,m; cin >> n >> m;
	int a[n+1][m+1];
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
			cin >> a[i][j];
		}
	}
	queue<pair<int,int>> q;
	int d[n+1][m+1]={0};// luu quang duong
	int used[n+1][m+1]={0};
	q.push({1,1});
	d[1][1]=0;
	used[1][1]=1;
	while(!q.empty()){
		pair<int,int> p=q.front();
		q.pop();
		int i=p.first,j=p.second;
		if(i==n && j==m){
			cout << d[n][m] << endl;
			return;
		}
		int j1=j+a[i][j];
		if(j1>=1 && j1<=m && used[i][j1]==0){
			q.push({i,j1});
			used[i][j1]=1;
			d[i][j1]=d[i][j]+1;
		}
		int i1=i+a[i][j];
		if(i1>=1 && i1<=n && used[i1][j]==0){
			q.push({i1,j});
			used[i1][j]=1;
			d[i1][j]=d[i][j]+1;
		}
	}
	if(used[n][m]==0){
		cout << -1 << endl;
	}
}
int main(){
	int t; cin >> t; 
	while(t--){
		solve();
	}
}
