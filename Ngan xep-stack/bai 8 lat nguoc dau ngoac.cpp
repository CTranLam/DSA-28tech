#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s;
	cin >> s;
	stack<char> st;
	int cnt=0;
	for(int x : s){
		if(x=='('){
			st.push(x);
		}
		else if(!st.empty()){
			st.pop();
		}
		else{
			++cnt;
		}
	}
	cout << (cnt+1)/2+(st.size()+1)/2 << endl;
}
