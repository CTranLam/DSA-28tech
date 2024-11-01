#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
int a[1001][1001];
vector<int> adj[1001];
vector<pair<int,int>> dsc;
int visited[1001];
void nhap(){
	cin >> n;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=n ; j++){
			cin >> a[i][j];
			if(a[i][j]==1){
				adj[i].push_back(j);
				if(i<j) dsc.push_back({j,i});
			}
		}
	}
	sort(dsc.begin(),dsc.end());
}
int main(){
	nhap();
	for(auto x : dsc){
		cout << x.first <<" "<<x.second<< endl;
	}
	cout << endl;
	for(int i=1 ; i<=n ; i++){
		sort(adj[i].begin(),adj[i].end());
		cout << i<<" : ";
		for(auto x : adj[i]){
			cout << x <<" ";
		}
		cout << endl;
	}
}
