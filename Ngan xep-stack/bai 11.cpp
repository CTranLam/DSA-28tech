#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int uutien(char x){
	if(x=='+' || x=='-') return 1;
	else if(x=='*' || x=='/') return 2;
	return 0;
	
}
int main(){
	string s;
	cin >> s;
	stack<char> st;// luu ki tu
	string res="";
	for(char x : s){
		if(isalpha(x)) res+=x;
		else if(x=='(') st.push(x);
		else if(x==')'){
			while(st.top() != '('){
				res+=st.top();
				st.pop();
			}
			st.pop();
		}
		else{
			while(!st.empty() && uutien(x) <= uutien(st.top())){
				res+=st.top();
				st.pop();
			}
			st.push(x);
		}
	}
	while(!st.empty()){
		res+=st.top();
		st.pop();
	}
	cout << res << endl;
}
