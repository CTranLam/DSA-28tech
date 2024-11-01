#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s; cin >> s;
	s+='a';
	string chu="";
	chu+=s[0];
	string so="";
	for(int i=1; i<s.size() ; i++){
		if(isdigit(s[i])) so+=s[i];
		else{
			for(int i=0 ; i<stoll(so) ; i++){
				cout << chu;
			}
			chu=s[i];
			so="";
		}
	}
}
