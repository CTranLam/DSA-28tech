#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m,s,t;
vector<int> a[1001];
int visited[1001];
void nhap(){
	cin >> n >>m;
	for(int i=0 ; i<m ; i++){
		int x,y;
		cin >> x >> y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
}
void dfs(int u){
	visited[u]=1;
	for(int v : a[u]){
		if(!visited[v]){
			dfs(v);
		}
	}
}
int main(){
	nhap();
	int cnt=0;// dem so tplt
	for(int i=1 ; i<=n ; i++){
		if(!visited[i]){
			++cnt;
			dfs(i);
		}
	}
	int dinhtru=0;
	for(int i= 1 ; i<=n ; i++){
		memset(visited,0,sizeof(visited));// khoi tao lai =0
		visited[i]=1;// coi nhu dinh nay da duoc tham va k xet lai
		int dem=0;
		for(int i=1 ; i<=n ; i++){
			if(!visited[i]){
				dfs(i);
				++dem;
			}
		}
		if(dem>cnt) ++dinhtru;
	}
	cout << dinhtru << endl;
}
