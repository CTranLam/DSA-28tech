#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int xuly(string s){
	stack<int> st;
	int cnt=0;
	for(int i=0 ; i<s.size() ; i++){
		if(s[i]=='(') st.push(i);
		else{
			if(!st.empty()) st.pop();// ngan xep k rong
			// xoa ki tu da them
			else{
				++cnt;
			}
		}
	}
	return cnt;
}
int main(){
	string s;
	cin >> s;
	cout << xuly(s);
}
