#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int bfs(int s,int t){
	queue<pair<int,int>> q;
	q.push({s,0});
	int visited[20005]={0};
	visited[s]=1;
	while(!q.empty()){
		auto it=q.front(); q.pop();
		if(it.first==t) return it.second;
		// thao tac 1
		if(it.first-1 > 1 && !visited[it.first-1]){
			q.push({it.first-1,it.second+1});
			visited[it.first-1]=1;
		}
		// thao tac 2
		if(it.first < t && !visited[it.first*2]){
			q.push({it.first*2,it.second+1});
			visited[it.first*2]=1;
		}
	}
}
int main(){
	int k; cin >> k;
	while(k--){
		int s,t; cin >> s >> t;
		cout << bfs(s,t) << endl;
	}
	
}
