#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string prefix_to_infix(string s){
	stack<string> st;
	for(int i=s.size()-1 ; i>=0 ; i--){
		if(isalpha(s[i])){
			string t="";
			t+=s[i];
			st.push(t);
		}
		else{
			string s1=st.top(); st.pop();
			string s2=st.top(); st.pop();
			string res="";
			res+="(";
			res+=s1+s[i]+s2;
			res+=")";
			st.push(res);
		}
	}
	return st.top();
}
int main(){
	string s;
	cin >> s;
	cout << prefix_to_infix(s) << endl; 
}
