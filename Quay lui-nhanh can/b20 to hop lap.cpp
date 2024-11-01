#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,k;
string s;
vector<int> v;
vector<vector<int>> ans;
void Try(int i){
	if(v.size()==k){
		ans.push_back(v);
		return;
	}
	for(int j=i ; j<=n ; j++){
		v.push_back(j);
		Try(j);
		v.pop_back();
	}
}
int main(){
	cin >> n >> k >> s;
	sort(s.begin(),s.end());
	Try(1);
	for(auto it : ans){
		for(int x : it){
			cout << s[x-1];
		}
		cout <<endl;
	}
}
