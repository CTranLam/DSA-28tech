#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
int a[1005][1005];
void chuyen(int p,int q){
	for(int i=1 ; i<=m ; i++){
		a[p][i]=28;
	}
	for(int i=1 ; i<=n ; i++){
		a[i][q]=28;
	}
}
int main(){
	cin >> n >> m;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
			cin >> a[i][j];
		}
	}
	vector<pair<int,int>> v;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
			if(a[i][j]==28){
				v.push_back({i,j});
			}
		}
	}
	for(auto x : v){
		chuyen(x.first ,x.second);
	}
	for(int i=1; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
			cout << a[i][j] <<" ";
		}
		cout << endl;
	}
}
