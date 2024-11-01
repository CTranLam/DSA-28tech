#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[101][101] , n,m;
int loang(int i,int j){
	int dx[8]={-1,-1,-1,1,1,1,0,0};
	int dy[8]={0,1,-1,0,-1,1,1,-1};
	for(int k=0 ; k< 8; k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1 >=0 && j1>=0 && i1 <n && j1 <m && a[i1][j1] >= a[i][j]){
			return 0;
		}
	}
	return 1;
}
int main(){
    cin >> n >> m;
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			cin >> a[i][j];
		}
	}
	int dem=0;
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			if(loang(i,j)) ++dem;
		}
	}
	cout << dem << endl;
}
