#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
vector<int> a[1001];
int visited[1001];
vector<int> topo;
int in[1001]; // luu ban bac vao 
void inp(){
	cin >> n >> m;
	for(int i=0 ; i<m ; i++){
		int x,y; cin >> x >> y;
		a[x].push_back(y);
		in[y]++;
	}
}
void kahn(){
	queue<int> q;
	for(int i=1 ;i<=n ; i++){
		if(in[i]==0){
			q.push(i);
		}
	}
	while(!q.empty()){
		int u=q.front();
		q.pop();
		topo.push_back(u);
		for(int v : a[u]){
			in[v]--;
			if(in[v]==0){
				q.push(v);
			}
		}
	}
	for(int x : topo){
		cout << x <<" ";
	}
}
int main(){
	inp();
	kahn();
}
