#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(string s){
	int lt=1 , sum=0;
	for(int i=s.size()-1 ; i>=0 ; i--){
		sum+=lt*(s[i]-'0');
		sum%=5;
		lt*=2;
	}
	if(sum==0) return 1;
	else return 0;
}
int main(){
	string s; cin >> s;
	if(check(s)) cout << "YES";
	else cout << "NO";
}
