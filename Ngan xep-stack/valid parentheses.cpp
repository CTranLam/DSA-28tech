#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void check(string s){
	stack<int> st;
	for(char x : s){
		if(x=='(') st.push(x);
		else{
			// stack k rong tuc la co dau ( trong stack
			if(st.empty()){
				cout <<"INVALID" << endl;
				return ;
			}
			else{
				st.pop();
			}
		}
	}
	if(st.empty()) cout << "VALID" << endl;
	else cout << "INVALID"<< endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		string s;
		cin >> s;
		check(s);
	}
}
