#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
vector<int> a[1001];
int visited[1001];
vector<int> topo;
int vao[1001];// ban bac vao
// sap xep topo chi doi voi do thi co huong
void nhap(){
	cin >>n >> m;
	for(int i=0 ; i<m ; i++){
		int x,y;
		cin >> x >> y;
		a[x].push_back(y);
		vao[y]++;
	}
}
void kahn(){
	queue<int> q;
	for(int i=1 ; i<=n ; i++){
		if(vao[i]==0){
			q.push(i);
		}
	}
	while(!q.empty()){
		int it=q.front();
		q.pop();
		topo.push_back(it);
		for(int v : a[it]){
			vao[v]--;
			if(vao[v]==0){
				q.push(v);
			}
		}
	}
}
int main(){
	nhap();
	kahn();
	if(topo.size() <n){
		cout <<1 << endl;
	}
	else cout << 0 << endl;
}
