#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s;
	cin >> s;
	map<char,int> mp;
	for(char x : s){
		mp[x]++;
	}
	ll ans=s.size();
	for(auto it: mp){
		ans+=((ll)it.second *(it.second-1)/2);
	}
	cout << ans;
}
