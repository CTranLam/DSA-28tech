#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(string s){
	stack<int> st;
	for(int i=0 ; i<s.size() ; i++){
		if(s[i]=='(') st.push(i);
		else if(s[i]==')'){
			int j=st.top();
			st.pop();
			if(s[j+1]=='(' && s[i-1]==')'){
				return 1;
			}
			if(i-j==2) return 1;
		}
	}
	return 0;
}
int main(){
	string s; cin >> s;
	if(check(s)) cout <<"YES" << endl;
	else cout <<"NO" << endl;
}
