#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
int d[505][505];
// thuat toan floyd tim duong di min giua cac canh
void nhap(){
	cin >> n >>m;
	for(int i=1 ; i<=200 ; i++){
		for(int j=1 ; j<=200 ; j++){
			if(i==j) d[i][j]=0;
			else{
				d[i][j]=1e9;
			}
		}
	}
	for(int i=0 ; i<m ; i++){
		int x,y,w;
		cin >> x >> y >> w;
		d[x][y]=d[y][x]=w; // do dai cac canh
	}
}
void floyd(){
	for(int k=1 ; k<=n ; k++){
		for(int i=1 ; i<=n ; i++){
			for(int j=1 ; j<=n ; j++){
				d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
			}
		}
	}
}
int main(){
	nhap();
	floyd();
	int q;
	cin >> q;
	while(q--){
		int x,y; cin >> x >> y;
		cout << d[x][y] << " ";
	}
}
