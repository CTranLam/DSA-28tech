#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
string s;
bool check(string t){
	stack<char> st;
	for(int i=0 ; i<t.size() ; i++){
		if(t[i]=='(' || t[i]=='{' || t[i]=='['){
			st.push(t[i]);
		}
		else{
			if(!st.empty()){
				char x=st.top();
				if(x=='(' && t[i] != ')') return false;
				if(x=='{' && t[i] != '}') return false;
				if(x=='[' && t[i] != ']') return false;
				st.pop();
			}
		}
	}
	return st.size()==0;
}
vector<string> ans;
void Try(int i,int open,int close){
	if(i==n){
		if(check(s)){
			ans.push_back(s);
		}
		return;
	}
	if(open<= n/2){
		for(auto x : {'{' , '(' ,'['}){
			s+=x;
			Try(i+1,open+1,close);
			s.pop_back();
		}
	}
	if(close<=open){
		for(auto x :{')' ,'}' ,']'}){
			s+=x;
			Try(i+1,open,close+1);
			s.pop_back();
		}
	}
}
int main(){
	cin >> n;
	if(n%2==1){
		cout << "NOT FOUND";
		return 0;
	}
	Try(0,0,0);
	sort(ans.begin(),ans.end());
	for(string x : ans){
		cout << x <<" ";
	}
}
