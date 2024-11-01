#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s;
	stack<string> st;
	vector<string> v;
	while(cin >> s){
		st.push(s);
	}
	while(!st.empty()){
		cout << st.top() <<" ";
		st.pop();
	}
}
