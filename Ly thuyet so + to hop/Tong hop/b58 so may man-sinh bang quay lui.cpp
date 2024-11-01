#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> v;
void make(string s){
	if(s.size()==12) return;
	if(s.size() != 0){
		v.push_back(stoll(s));
	}
	make(s+"4");
	make(s+"7");
}
int main(){
	ll n ; cin >> n;
	string s="";
	make(s);
	for(ll x:v){
		if(n%x==0){
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
}
