#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int k,n,m;
vector<int> ke[20005];
int visited[20005];
int dem[20005];
void dfs(int u){
	dem[u]++;
	visited[u]=1;
	for(int x : ke[u]){
		if(!visited[x]){
			dfs(x);
		}
	}
}
int main(){
	cin >> k >> n >>m;
	vector<int> people;// luu vi tri k nguoi dang dung
	for(int i=0 ; i<k ; i++){
		int x; cin >> x;
		people.push_back(x);
	}
	for(int i=0 ; i<m ; i++){
		int x,y;
		cin >> x >> y;
		ke[x].push_back(y);
	}
	for(int x : people){
		memset(visited,0,sizeof(visited));
		dfs(x);
	}
	int cnt=0;
	for(int i=1 ; i<=n ; i++){
		if(dem[i]==k){
			++cnt;
		}
	}
	cout << cnt;
}
