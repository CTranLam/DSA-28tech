#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s; cin >> s;
	s+='1';
	string ans="";
	ans+=s[0];
	for(int i=1; i<s.size() ; i++){
		if(s[i]==s[i-1]) ans+=s[i];
		else{
			cout << s[i-1] << ans.size();
			ans=s[i];
		}
	}
}
