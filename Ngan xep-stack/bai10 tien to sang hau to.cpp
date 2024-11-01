#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string change(string s){
	stack<string> st;
	reverse(s.begin(),s.end());
	for(char x : s){
		if(isalpha(x)){
			string t="";
			t+=x;
			st.push(t);
		}
		else{
			string tmp="";
			string s1=st.top();st.pop();
			string s2=st.top();st.pop();
			tmp+=s1+s2+x;
			st.push(tmp);
		}
	}
	return st.top();
}
int main(){
	string s;
	cin >> s;
	cout << change(s) << endl;
}
