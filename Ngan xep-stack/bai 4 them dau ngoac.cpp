#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s;
	cin >> s;
	stack<char> st;
	int cnt=0;
	for(int x: s){
		if(x=='(') st.push(x);
		else{
			if(st.empty()){
				++cnt;
			}
			else{
				st.pop();
			}
		}
	}
	if(st.empty()) cout << cnt << endl;
	else cout << cnt+st.size() << endl;
}
