#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n;cin >> n;
	int a[n];
	vector<int> v;
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
		if(a[i] != 0) v.push_back(a[i]);
	}
	int dem0=n-v.size();
	for(int x : v){
		cout << x << " ";
	}
	while(dem0){
		cout << 0 <<" ";
		--dem0;
	}
}
