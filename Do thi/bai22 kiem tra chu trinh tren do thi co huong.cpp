#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m; 
vector<int> a[1001];
int color[1001];// luu mau cua cac phan tu
void nhap(){
	cin >> n >> m;
	for(int i=0 ; i<m ; i++){
		int x,y;
		cin >> x >> y;
		a[x].push_back(y);
	}
}
bool dfs(int u){
	color[u]=1;// mau xam
	for(int v : a[u]){
		if(color[v]==1){
			return true; // di den 1 thang da co trong stack
		}
		if(color[v]==0){
			if(dfs(v)) return true;
		}
	}
	color[u]=2; // da duyet xong
	return false;
}
int main(){
	nhap();
	for(int i=1 ; i<=n ; i++){
		if(color[i]==0){
			if(dfs(i)){
				cout << 1 << endl;
				return 0;
			}
		}
	}
	cout << 0 << endl;
}
