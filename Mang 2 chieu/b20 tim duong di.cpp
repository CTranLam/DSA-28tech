#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[101][101],n,m;
int s,t,u,v;
void loang(int i,int j){
	a[i][j]=0;
	int dx[4]={0,0,1,-1};
	int dy[4]={-1,1,0,0};
	for(int k=0 ; k<4 ; k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=1 && j1 >=1 && i1<=n && j1<=m && a[i1][j1]==1){
			loang(i1,j1);
		}
	}
}
int main(){
	cin >> n >> m;
	cin >> s >> t >> u >> v;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
			cin >> a[i][j];
		}
	}
	loang(s,t);
	if(a[u][v]==0) cout << "YES" <<endl;
	else cout << "NO" <<endl;
}
