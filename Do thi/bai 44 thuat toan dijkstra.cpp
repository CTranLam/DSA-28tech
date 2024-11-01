#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
int n,m,s;
int visited[200005];
vector<ii> ke[200005];
void nhap(){
	cin >> n >>m >> s;
	for(int i=0 ; i<m ; i++){
		int x,y,w;
		cin >>x >> y>> w;
		ke[y].push_back({x,w});
		ke[x].push_back({y,w});
	}
}
void dijkstra(int s){
	vector<int> d(n+1,1e9); // chi phi min den cac dinh 
	d[s]=0;
	priority_queue<ii,vector<ii>> q;
	q.push({0,s}); // luu gia tri va dinh
	while(!q.empty()){
		ii p=q.top();
		q.pop();
		int u=p.second,dis=p.first;
		if(dis > d[u]) continue;
		d[u]=dis;
		// relax
		for(ii it : ke[u]){
			int v=it.first,w=it.second;
			if(d[v] > d[u] + w){
				d[v]=d[u]+w;
				q.push({d[v],v});
			}
		}
	}
	for(int i=1 ; i<=n ; i++){
		cout << d[i] <<" ";
	}
}
int main(){
	nhap();
	dijkstra(s);
}
