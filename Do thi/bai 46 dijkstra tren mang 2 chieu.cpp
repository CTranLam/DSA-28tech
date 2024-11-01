#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
typedef pair<int , ii> iii;
int n,m;
int a[505][505];
int d[505][505];
void nhap(){
	cin >> n >> m;
	for(int i=1 ; i<= n ; i++ ){
		for(int j=1 ; j<=m ;j++){
			cin >> a[i][j];
			d[i][j]=1e9;
		}
	}
}
int dx[4]={0,0,-1,1};
int dy[4]={-1,1,0,0};
void dijkstra(int i,int j){
	d[i][j]=a[i][j];
	priority_queue <iii,vector<iii>> q;
	q.push({d[i][j],{i,j}});
	while(!q.empty()){
		iii p=q.top();
		q.pop();
		int u=p.second.first,v=p.second.second;
		int dis=p.first;
		if(dis>d[u][v]) continue;
	    d[u][v]=dis;
		for(int k=0 ; k<4 ; k++){
			int u1=u+dx[k];
			int v1=v+dy[k];
			if(u1 >= 1 && u1 <= n && v1 >=1 && v1 <=m){
				if(d[u1][v1] > d[u][v] + a[u1][v1]){
					d[u1][v1]=d[u][v]+a[u1][v1];
					q.push({d[u1][v1],{u1,v1}});
				}
			}
		}
	}
	cout << d[n][m] << endl;
}
int main(){
	nhap();
	dijkstra(1,1);
}
