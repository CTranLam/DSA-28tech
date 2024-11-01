#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s;
	cin >> s;
	stack<ll> st;
	for(char x : s){
		if(isdigit(x)){
			st.push(x-'0');
		}
		else{
			ll s1=st.top();st.pop();
			ll s2=st.top();st.pop();
			ll res=0;
			if(x=='+') res=s1+s2;
			else if(x=='-') res=s2-s1;
			else if(x=='*') res=(ll)s1*s2;
			else res=s2/s1;
			st.push(res);
		}
	}
	cout << st.top() << endl;
}
