#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool valid(char x , char y){
	return ((x=='(' && y==')') || (x=='{' && y=='}') || (x=='[' && y==']'));
}
bool check(string s){
	stack <char> st;
	for(char x : s){
		if(x=='(' || x=='{' || x=='[') st.push(x);
		else{
			if(st.empty()) return 0;
			if(!valid(x,st.top())) return 0;
			st.pop();
		}
	}
	if(st.empty()) return 1;
	else return 0;
}
int main(){
	string s;
	cin >> s;
	if(check(s)) cout << "YES";
	else cout <<"NO";
}
