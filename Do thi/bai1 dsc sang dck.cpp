#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
vector<int> a[1001];
int visited[1001];
void nhap(){
	cin >> n >>m ;
	for(int i=0 ; i< m ; i++){
		int x,y;
		cin >> x >> y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
}
int main(){
	nhap();
	for(int i=1 ; i<=n ; i++){
		cout << i <<" : ";
		sort(a[i].begin() , a[i].end());
		for(int x : a[i]){
			cout << x <<" ";
		}
		cout << endl;
	}
}
