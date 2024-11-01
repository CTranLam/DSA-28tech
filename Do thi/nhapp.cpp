#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
typedef pair<int,int> ii;
vector<ii> ke[200005];
int visited[200005];
void init(){
	cin >> n >> m;
	for(int i=0 ; i<m ; i++){
		int x,y,w;
		cin >> x >> y >> w;
		ke[x].push_back({y,w});
		ke[y].push_back({x,w});
	}
}
priority_queue<ii,vector<ii>, greater<ii>> q;
ll res=0;// luu gia tri cay khung
ll cnt=0;// dem so luong canh cua cay khung
void Prim(int u){
	visited[u]=1;
	for(ii it : ke[u]){
		q.push({it.second,it.first});
	}
	while(!q.empty()){
		ii p=q.top();
		q.pop();
		if(visited[p.second]) continue; // da nam o trong cay khung
		++cnt;
		res+=p.first;
		visited[p.second]=1;
		for(ii v : ke[p.second]){
			if(!visited[v.first]){
				q.push({v.second,v.first});
			}
		}
		if(cnt==n-1){ // trong cay khung da co du n canh
			break;
		}
	}
	if(cnt==n-1){
		cout << res << endl;
	}
	else cout <<"IMPOSSIBLE" << endl;
}
int main(){
	init();
	Prim(1);
}
