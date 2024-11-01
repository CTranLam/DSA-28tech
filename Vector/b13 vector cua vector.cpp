#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void nhap(vector<vector<int>> &v , int n , int m){
	for(int i=0 ; i<n ; i++){
		vector<int> v1;
		for(int j=0 ; j<m ; j++){
			int x;cin >> x;
			v1.push_back(x);
		}
		v.push_back(v1);
	}
}
void in(vector<vector<int>> &v , int n , int m){
	for(auto x : v){
		for(int y : x){
			cout << y << " ";
		}
		cout << endl;
	}
}
void lap(vector<vector<int>> &v , int n , int m){
	for(auto &x : v){
		reverse(x.begin() , x.end());
	}
}
int main(){
	int n,m; cin >> n >> m;
	vector<vector<int>> v;
	nhap(v,n,m);
	lap(v,n,m);
	in(v,n,m);
}
