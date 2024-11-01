#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct canh{
	int x,y,w;
};
int n,m,s;
vector<canh> V;
void nhap(){
	cin >> n >> m >> s;
	for(int i=0 ; i<m ; i++){
		int x,y,w;
		cin >> x >> y >> w;
		V.push_back({x,y,w});
		V.push_back({y,x,w}); // voi do thi co huong thi khong can
	}
}
void bellmanford(int s){
	vector<int> d(n+1,1e9);
	d[s]=0;
	for(int i=1 ; i<=n-1 ; i++){
		for(canh e : V){
			int u=e.x,v=e.y,w=e.w;
			if(d[v] > d[u]+w){
				d[v]=d[u]+w;
			}
		}
	}
	for(int i=1 ; i<=n ; i++){
		cout << d[i] <<" ";
	}
}
int main(){
	nhap();
	bellmanford(s);
}
