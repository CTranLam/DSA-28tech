#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n;
	cin >> n;
	ll tmp=n;
	vector<int> v;
	map<int,int> mp;
	while(n){
		int x=n%10;
		if(x==2 || x==3 || x==5 || x==7){
			v.push_back(x);
			mp[x]++;
		}
		n/=10;
	}
	for(auto x: mp){
		cout << x.first <<" "<<x.second << endl;
	}
	cout << endl;
	for(int i=v.size()-1; i>=0 ; i--){
		if(mp[v[i]] != 0){
			cout << v[i] <<" "<<mp[v[i]] <<endl;
			mp[v[i]]=0;
		}
	}
}
