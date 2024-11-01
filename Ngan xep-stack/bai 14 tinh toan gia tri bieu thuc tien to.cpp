#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s;
	cin >> s;
	stack<int> st;
	for(int i=s.size()-1; i>=0 ; i--){
		if(isdigit(s[i])){
			st.push(s[i]-'0');
		}
		else{
			int s1=st.top();st.pop();
			int s2=st.top();st.pop();
			int res=0;
			if(s[i]=='+') res+=s1+s2;
			else if(s[i]=='-') res+=s1-s2;
			else if(s[i]=='*') res+=s1*s2;
			else res+=s1/s2;
			st.push(res);
		}
	}
	cout << st.top() << endl;
}
