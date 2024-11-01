#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s;
	cin >> s;
	stack<string> st;
	for(int x : s){
		if(isalpha(x)){
			string p="";
			p+=x;
			st.push(p);
		}
		else{
			string s1=st.top();st.pop();
			string s2=st.top();st.pop();
			string res="";
			res+="(";
			res+=s2;res+=x;res+=s1;
			res+=")";
			st.push(res);
		}
	}
	cout << st.top() << endl;
}
