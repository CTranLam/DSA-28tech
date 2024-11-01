#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;
vector<string> ans;
vector<char> cur;
map<int,string> mp;
void Try(int i){
	if(i==s.size()){
		string s="";
		for(char x : cur){
			s+=x;
		}
		ans.push_back(s);
	}
	else{
		for(char x : mp[s[i]-'0']){
			cur.push_back(x);
			Try(i+1);
			cur.pop_back();
		}
	}
}
int main(){
	cin >> s;
	sort(s.begin() ,s.end());
	mp[2]="abc";mp[3]="def";mp[4]="ghi";mp[5]="jkl";mp[6]="mno";
	mp[7]="pqrs";mp[8]="tuv",mp[9]="wxyz";
	Try(0); // quay lui tu s[0]
	for(string x : ans){
		cout << x << " ";
	}
}
