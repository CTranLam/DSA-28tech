#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
int main(){
	int n; cin >> n;
	vector<int>v;
	for(int i=0 ; i<n ; i++){
		int x; cin >> x;
		v.push_back(x);
	}
	int l,r;
	cin >> l >> r;
	vector <int> x;
	for(auto it=v.begin()+l ; it<=v.begin()+r ; it++){
		cout << *it <<" ";
		x.push_back(*it);
	}
	cout << endl;
	for(auto it=x.rbegin() ; it != x.rend() ; it++){
		cout << *it <<" ";
	}
}
