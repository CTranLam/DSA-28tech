#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m,s;
typedef pair<int,int> ii;
int visited[200005];
vector<ii> ke[200005];
void nhap(){
	cin >> n >> m >> s;
	for(int i=0 ; i<m ; i++){
		int x,y,w;
		cin >> x >> y >> w;
		ke[x].push_back({y,w});
		ke[y].push_back({x,w});
	}
}
int d[200005];
void dijkstra(int s){
	vector<int> d(n+1,1e9);// chi phi den cac dinh
	priority_queue<ii,vector<ii>, greater<ii>> Q;
	d[s]=0;
	Q.push({0,s});// luu gia tri va dinh 
	while(!Q.empty()){
		ii p=Q.top();
		Q.pop();
		int u=p.second,dis=p.first;
		if(dis>d[u]) continue;
		d[u]=dis;
		// relax
		for(ii it : ke[u]){
			if(d[it.first] > d[u]+it.second){
				d[it.first]=d[u]+it.second;
				Q.push({d[it.first],it.first});
				// them thang bi thay doi vao de con relax nhung thang dung sau nua
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
