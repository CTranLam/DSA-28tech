#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
int a[501][501];
int ans=0;
void loang (int i,int j){
	++ans;
	a[i][j]=0;
	int dx[4]={0,0,-1,1};
	int dy[4]={1,-1,0,0};
	for(int k=0 ; k<4 ; k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=0 && j1>=0 && i1<n && j1 <m && a[i1][j1]==1){
			loang (i1,j1);
		}
	}
}
int main(){
	cin >> n >> m;
	int dem=0;
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			cin >> a[i][j];
		}
	}
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			if(a[i][j]==1){
				loang(i,j);
				dem=max(dem,ans);
				ans=0;
			}
		}
	}
	cout << dem <<endl;
}
