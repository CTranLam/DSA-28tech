#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,m; cin >> n >> m;
	int a[n],b[m];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	for(int i=0 ; i<m ; i++){
		cin >> b[i];
	}
	vector<int> v;
	for(int i=0 ; i<m ; i++){
		int *it = lower_bound(a,a+n,b[i]);
		int pos=it-a;
		v.push_back(pos);
	}
	for(int x : v){
		cout << x <<" ";
	}
}
