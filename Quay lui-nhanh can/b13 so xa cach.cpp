#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int used[30];
vector<int> cur; // luu so tm
vector<string> ans;
void Try(int i){
	if(i==n+1){
		string s="";
		for(int j=1 ; j<cur.size() ; j++){
			s+=to_string(cur[j]);
		}
		ans.push_back(s);
		return;
	}
	for(int j=1 ; j<=n ; j++){
		if(used[j]==0 && abs(j-cur.back()) != 1){
			used[j]=1;
			cur.push_back(j);
			Try(i+1);
			cur.pop_back();
			used[j]=0;
		}
	}
}
int main(){
	cin >> n;
	cur.push_back(-1);
	Try(1);
	sort(ans.begin() , ans.end());
	for(string x : ans){
		cout << x << endl;
	}
}
