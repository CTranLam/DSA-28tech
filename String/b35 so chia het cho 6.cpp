#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s; cin >> s;
	int sum=0;
	for(int i=0 ; i<s.size() ; i++){
		sum=sum*10+s[i]-'0';
		sum%=6;
	}
	if(sum==0) cout <<"YES";
	else cout <<"NO";
}