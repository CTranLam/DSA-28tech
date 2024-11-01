#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;char a[101][101];
int dem=0;
void loang(int i,int j){
	dem++;
	a[i][j]='.';
	int dx[4]={1,-1,0,0};
	int dy[4]={0,0,-1,1};
	for(int k=0 ; k<4 ; k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=1&& j1>=1 && i1<=n && j1<=m && a[i1][j1]=='*'){
			loang(i1,j1);
		}
	}
} 
int main(){
	cin >> n >> m;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
			cin >> a[i][j];
		}
	}
	multiset<int> se;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
			if(a[i][j]=='*'){
				loang(i,j);
				se.insert(dem);
				dem=0;
			}
		}
	}
	for(int x : se){
		cout << x <<" ";
	}
}
