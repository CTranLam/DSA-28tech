#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
int parent[100001],sz[100001];
struct canh{
	int a,b,c;
};
vector<canh> dscanh;
// su dung disjoin set
void init(){
	for(int i=1 ; i<=n ; i++){
		parent[i]=i;
		sz[i]=1;
	}
}
int find(int x){
	if(x==parent[x]) return x;
	else return parent[x]=find(parent[x]);
}
bool Union(int x,int y){
	x=find(x);
	y=find(y);
	if(x==y) return false;
	if(sz[x] < sz[y]){
		parent[x]=y;
		sz[y]+=sz[x];
	}
	else{
		parent[y]=x;
		sz[x]+=sz[y];
	}
	return true;
}
int cmp(canh x, canh y){
	return x.c<y.c;
}
void krukal(){
	sort(dscanh.begin(),dscanh.end(),cmp);
	vector<canh> ans; // luu cac canh tren cay khung cuc tieu
	ll d=0;
	for(int i=0 ; i<m ; i++){
		int a=dscanh[i].a,b=dscanh[i].b,c=dscanh[i].c;
		if(Union(a,b)){
			ans.push_back({a,b,c});
			// gop duoc 2 canh k tao chu trinh
			d+=c;
		}
		if(ans.size()==n-1){
			break;
		}
	}
	if(ans.size()==n-1){
		cout << d << endl;
	}
	else{
		cout << "IMPOSSIBLE" << endl;
	}
	for(int i=0 ; i<ans.size() ; i++){
		cout << ans[i].a << " "<<ans[i].b <<" "<<ans[i].c << endl;
	}
}
int main(){
	cin >> n >> m;
	init();
	for(int i=1 ; i<=m ; i++){
		int a,b,c;
		cin >> a >> b >> c;
		dscanh.push_back({a,b,c});
	}
	krukal();
}
