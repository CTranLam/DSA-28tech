#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[101][101],n;
int s,t,u,v;
void loang(int i,int j){
	a[i][j]=0;
	int dx[8]={1,1,-1,-1,2,2,-2,-2};
	int dy[8]={-2,2,-2,2,1,-1,1,-1};
	for(int k=0 ; k<8 ; k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=1 && j1 >=1 && i1<=n && j1<=n && a[i1][j1]==1){
			loang(i1,j1);
		}
	}
}
int main(){
	cin >> n;
	cin >> s >> t >> u >> v;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=n ; j++){
			cin >> a[i][j];
		}
	}
	loang(s,t);
	if(a[u][v]==0) cout << "YES" <<endl;
	else cout << "NO" <<endl;
}
