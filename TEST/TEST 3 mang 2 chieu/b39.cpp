#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m; 
int a[101][101];
map<pair<int,int>,int> mp;
void loang(int i,int j){
	a[i][j]=2;
	int dx[2]={0,1};
	int dy[2]={1,0};
	for(int k=0 ; k<2 ; k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1 >= 1 && j1 >=1 && i1<=n && j1 <=m &&a[i1][j1] != 0){
			mp[{i1,j1}]++;
			loang(i1,j1);
		}
	}
}
int main(){
	cin >> n >>m;
	for(int i=1 ; i <=n ; i++){
		for(int j=1 ; j<=m ; j++){
			cin >>a[i][j];
		}
	}
	loang(1,1);
	cout << mp[{n,m}] << endl;
}
