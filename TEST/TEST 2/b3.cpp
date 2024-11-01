#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,q;cin >> n >> q;
	vector<vector<string>> v;
	cin.ignore();
	while(n--){
		string s;getline(cin,s);
		stringstream ss(s);
		string x;
		vector<string> t;
		while(ss>> x){
			t.push_back(x);
		}
		v.push_back(t);
	}
	while(q--){
		int x,y;
		cin >> x >> y;
		cout << v[x-1][y] <<endl;
	}
}
