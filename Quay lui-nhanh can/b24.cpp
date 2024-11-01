#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;
int n;
vector<vector<int>> ans;
vector<int> va;
void Try(int i){
	if(i==n+1){
		ans.push_back(va);
		return;
	}
	for(int j=0 ; j<=1 ; j++){
		va.push_back(j);
		Try(i+1);
		va.pop_back();
	}
}
int main(){
	cin >> s;
	int cnt=0;
	vector<int> v;
	vector<string> vs;
	for(int i=0 ; i<s.size() ; i++){
		if(isalpha(s[i])){
			++cnt;
			v.push_back(i);
		}
	}
	n=cnt;
	Try(1);
	for(auto it: ans){
		int vt=0;
		for(int x : it){
			if(x==0){
				s[v[vt]]=tolower(s[v[vt]]);
			}
			else{
				s[v[vt]]=toupper(s[v[vt]]);
			}
			++vt;
		}
		vs.push_back(s);
	}
	sort(vs.begin() ,vs.end());
	for(string x : vs){
		cout << x << endl;
	}
}
