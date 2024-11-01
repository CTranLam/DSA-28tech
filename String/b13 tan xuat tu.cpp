#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s; getline(cin,s);
	stringstream ss(s);
	string x;
	vector<string> v;
	map<string,int> mp;
	while(ss >> x){
		v.push_back(x);
		mp[x]++;
	}
	for(auto x : mp){
		cout << x.first <<" "<<x.second<<endl;
	}
	cout << endl;
	for(string x : v){
		if(mp[x] != 0){
			cout << x << " "<<mp[x]<<endl;
			mp[x]=0;
		}
	}
}
