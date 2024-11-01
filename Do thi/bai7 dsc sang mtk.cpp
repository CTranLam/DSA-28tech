#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
int a[1001][1001];
vector<int> adj[1001];
int visited[1001];
void nhap(){
	cin >> n >>m ;
	for(int i=0 ; i<m ; i++){
		int x,y;
		cin >> x >> y;
		a[x][y]=1;
		a[y][x]=1;
	}
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=n ; j++){
			cout << a[i][j] <<" ";
		}
		cout << endl;
	}
}
int main(){
	nhap();
}
