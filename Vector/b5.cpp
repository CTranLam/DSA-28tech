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
	reverse(v.begin() , v.end());
	for(int x : v){
		cout << x << " ";
	}
	cout << endl;
	int l,r;
	cin >> l >> r;
	reverse(v.begin()+l , v.begin()+r+1);
	for(int x : v){
		cout << x << " ";
	}
}
