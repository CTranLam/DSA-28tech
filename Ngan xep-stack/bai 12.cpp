#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s;
	cin >> s;
	stack<string> st;
	for(int x : s){
		if(isalpha(x)){
			string t="";
			t+=x;
			st.push(t);
		}
		else{
			string s1=st.top(); st.pop();
			string s2=st.top();st.pop();
			string res="";
			res+=x;
			res+=s2+s1;
			st.push(res);
			
		}
	}
	cout << st.top() << endl;
}
