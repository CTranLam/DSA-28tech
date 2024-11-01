#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s;
	cin >> s;
	stack<string> st;
	for(int i=s.size()-1 ; i>=0 ; i--){
		if(isalpha(s[i])){
			string p="";
			p+=s[i];
			st.push(p);
		}
		else{
			string s1=st.top();
			st.pop();
			string s2=st.top();
			st.pop();
			string t="";
			t+="(";
			t+=s1+s[i]+s2;
			t+=")";
			st.push(t);
		}
	}
	cout << st.top() << endl;
}
