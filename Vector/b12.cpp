#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void rev(vector<int> &v){
	int l=0, r=v.size()-1;
	while(l<=r){
		swap(v[l] , v[r]);
		++l;
		--r;
	}
	for(int x : v){
		cout << x << " ";
	}
}
int main(){
	int n; cin >> n;
	vector<int> v;
	for(int i=0 ; i<n ;i++){
		int x; cin >> x;
		v.push_back(x);
	}
	rev(v);
}
