#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;int a[101][101];
int dem=0;
void loang(int i,int j){
	a[i][j]=2;
	int dx[4]={1,-1,0,0};
	int dy[4]={0,0,-1,1};
	for(int k=0 ; k<4 ; k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=1&& j1>=1 && i1<=n && j1<=m && a[i1][j1]==1){
			loang(i1,j1);
		}
	}
	for(int k=0 ; k<4 ; k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=1 && j1 >=1 && i1 <=n && j1 <=m && a[i1][j1]==2){
			continue;
		}
		else ++dem;
	}
} 
int main(){
	cin >> n >> m;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
			cin >> a[i][j];
		}
	}
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
			if(a[i][j]==1){
				loang(i,j);
				cout << dem << " ";
				dem=0;
			}
		}
	}
}
