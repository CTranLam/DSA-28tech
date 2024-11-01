#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
int n,m;
vector<ii> ke[200005];
int used[200005];
void init(){
	cin >> n >> m;
	for(int i=1 ; i<=m ; i++){
		int x,y,w;
		cin >> x >> y >> w;
		ke[x].push_back({y,w});
		ke[y].push_back({x,w});
	}
}
void Prim(int s){
	used[s]=1;
	priority_queue<ii,vector<ii>, greater<ii>> Q;
	for(ii it : ke[s]){
		if(!used[it.first]){
			Q.push({it.second,it.first});
		}
	}
	ll res=0,cnt=0;
	while(!Q.empty()){
		ii p=Q.top();
		Q.pop();
		if(used[p.second]) continue;// dinh nay da nam trong tap MST
		++cnt;
		res+=p.first;
		used[p.second]=1;// dua no vao trong cay khung
		for(ii it : ke[p.second]){
			if(!used[it.first]){
				Q.push({it.second,it.first});
			}
		}
		if(cnt==n-1) break;
	}
	if(cnt== n-1){
		cout << res << endl; 
	}
	else cout <<"IMPOSSIBLE" << endl;
}
int main(){
	init();
	Prim(1);
}
