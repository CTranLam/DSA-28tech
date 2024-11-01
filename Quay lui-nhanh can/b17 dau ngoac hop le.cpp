#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// su dung cau truc stack-ngan xep
bool check(string s){
	stack<char> st;
	for(int i=0 ; i<s.size() ; i++){
		if(s[i]=='(' || s[i]=='{' || s[i]=='[') st.push(s[i]);
		else{
			if(!st.empty()){
				char t=st.top();
				if(s[i]==')' && t != '(') return false;
				if(s[i]==']' && t != '[') return false;
				if(s[i]=='}' && t != '{') return false;
				st.pop();
			}
		}
	}
	return st.size()==0;
}
vector<string> ans;
int n;
string s;
void solve(int i,int o ,int c){
	if(i==n){
		if(check(s)){
			ans.push_back(s);
		}
		return;
	}
	if(o<=n/2){
		for(auto x : {'(','[','{'}){
			s+=x;
			solve(i+1,o+1,c);
			s.pop_back();
		}
	}
	if(c<=o){
		for(auto x : {')',']','}'}){
			s+=x;
			solve(i+1,o,c+1);
			s.pop_back();
		}
	}
}
int main(){
	cin >> n;
	if(n%2==1){
		cout <<"NOT FOUND" <<endl;
		return 0;
	}
	solve(0,0,0);
	sort(ans.begin() ,ans.end());
	for(string x : ans){
		cout << x <<" ";
	}
}
