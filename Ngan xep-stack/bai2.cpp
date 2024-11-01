#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	stack<int> st;
	while(t--){
		string s;
		cin >> s;
		if(s=="push"){
			int x; cin >> x;
			st.push(x);
		}
		if(s=="top"){
			if(st.empty())cout <<"NONE" << endl;
			else{
				cout << st.top() <<endl;
			}
		}
		if(s=="pop"){
			if(!st.empty()) st.pop();
		}
	}
}
