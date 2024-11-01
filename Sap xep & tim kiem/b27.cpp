#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	int a[n];
	vector<int> v;
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
		v.push_back(a[i]);
	}
	sort(a,a+n);
	for(int x : v){
		auto it=upper_bound(a,a+n,x);
		if(it-a != n) cout << *it <<" ";
		else cout << "_" <<" ";
	}
}
