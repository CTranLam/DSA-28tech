#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
int n,m;
vector<ii> ke[200005];
int visited[200005];
void nhap(){
	cin >> n >>m;
	for(int i=0 ; i<m ; i++){
		int x,y,w;
		cin >> x >> y >> w;
		ke[x].push_back({y,w});
		ke[y].push_back({x,w});
	}
}
void Prim(int u){
	visited[u]=1;
	priority_queue <ii,vector<ii> , greater<ii>> q;
	for(ii it : ke[u]){
		if(!visited[it.first]){
			q.push({it.second,it.first}); // hang doi se sap xep theo first giam dan
		}
	}
	ll d=0;
	ll cnt=0;
	while(!q.empty()){
		ii p=q.top();
		q.pop();
		if(visited[p.second]) continue;// dinh do da duoc them vao 
		d+=p.first;
		cnt++;
		visited[p.second]=1;
		for(ii it : ke[p.second]){
			if(!visited[it.first]){ // dinh do chua dc them vao
				q.push({it.second,it.first});
			}
		}
	}
	if(cnt==n-1)
		cout << d << endl;
	else{
		cout << "IMPOSSIBLE" << endl;
	}
}
int main(){
	nhap();
	Prim(1);
}
