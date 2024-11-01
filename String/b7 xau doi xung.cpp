#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s;cin >> s;
	int l=0,r=s.size()-1;
	while(l<r){
		if(s[r] != s[l]){
			cout <<"NO";
			return 0;
		}
		++l;
		--r;
	}
	cout <<"YES";
}

