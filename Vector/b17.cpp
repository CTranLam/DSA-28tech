#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<string> chuyen(ll n){
	vector<string> v;
	string ans="";
	while(n){
		ans+=to_string(n%2);
		n/=2;
	}
	string res="";
	for(int i=ans.size()-1 ; i>=0; i--){
		res+=ans[i];
	}
	while(res.size() <64){
		res="0"+res;
	}
	v.push_back(res);
	return v;
}
int main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
	    vector<string> res=chuyen(n);
	    for(string x : res){
		    cout << x <<endl;
	    }
	}
}
