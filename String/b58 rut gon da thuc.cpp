#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dem[1000001];
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s; getline(cin,s);
		for(char &x : s){
			if(x=='x' || x=='^' ||x=='+') x=' ';
		}
		stringstream ss(s);
		string x;
		vector<ll>v;
		while(ss>>x){
			v.push_back(stoll(x));
		}
		for(int i=1 ; i<v.size(); i+=2){
			dem[v[i]]+=v[i-1];
		}
		vector<pair<ll,ll>> vp;
		for(int i=1 ; i<v.size() ; i+=2){
			if(dem[v[i]] != 0){
				pair<int,int> p;
				p.first=v[i]; // mu 
				p.second=dem[v[i]]; // chi so
				vp.push_back(p);
				dem[v[i]]=0;
			}
		}
		map<ll,ll> mp;
		int ans=0;
		for(int i=0 ; i<vp.size() ; i++){
			mp[vp[i].first]=vp[i].second;
			++ans;
		}
		for(auto x : mp){
			cout << x.second <<"x^"<<x.first;
			--ans;
			if(ans > 0) cout <<" + ";
		}
		cout << endl;
	}
}
