#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(char x,char y){
	return ((x=='[' && y==']') || (x=='{' && y=='}') || (x=='(' && y==')'));
}
int main(){
	string s;
	cin >> s;
	stack<char> st;
	for(char x : s){
		if(x=='(' || x=='{' || x=='[') st.push(x);
		else if(!st.empty()){
			if(!check(st.top(),x)){
				cout <<"NO" << endl;
				return 0;
			}
			st.pop();
		}
		else{
			cout << "NO" << endl;
			return 0;

		}
	}
	if(st.empty()){
		cout <<"YES" << endl;
	}
	else cout <<"NO" << endl;
}
