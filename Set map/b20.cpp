#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s;
	map<string , vector<pair<int,int>>> mp;
	while(getline(cin,s)){
		stringstream ss(s);
		string x; string ten="";int tc,diem;
		vector<string> v;
		while(ss>>x ){
			v.push_back(x);
		}
		ten+=v[0];
		tc=stoi(v[1]);
		diem=stoi(v[2]);
		mp[ten].push_back({tc,diem});
	}
	for(auto it=mp.rbegin() ; it != mp.rend() ; it++){
		cout << it->first << " : ";
		vector<pair<int,int>> ans=it->second;
		int diem=0,tc=0;
		for(int i=0 ; i<ans.size() ; i++){
			tc+=ans[i].first;
			diem+=(ans[i].second * ans[i].first);
		}
		cout << fixed << setprecision(2) << (double)diem/tc << endl;
	}
}
