#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s;
	cin >>s ;
	stack<char> st;
	st.push(s[0]);
	for(int i=1 ; i<s.size() ; i++){
		if(!st.empty()){
			if(s[i] != st.top()) st.push(s[i]);
			else st.pop();
		}
		else st.push(s[i]);
	}
	vector<char> v;
	if(st.size()==0){
		cout <<"EMPTY" << endl;
		return 0;
	}
	while(!st.empty()){
		v.push_back(st.top());
		st.pop();
	}
	reverse(v.begin(),v.end());
	for(char x : v){
		cout << x;
	}
}
