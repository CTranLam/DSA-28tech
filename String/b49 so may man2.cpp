#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s; cin >> s;
	for(int i=0; i<=s.size()-3 ; i++){
		if(s.size() <3) break;
		if(s[i]=='1' && s[i+1] =='1' && s[i+2] =='1'){
			s.erase(i,3);
		    --i;
		}
	}
	if(s.size() == 0) cout << "EMPTY";
	else cout << s;
}
