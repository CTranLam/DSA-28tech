#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s; string t;
	getline(cin,s);
	getline(cin,t);
	if(s.find(t) != string::npos) cout <<"YES";
	else cout << "NO";
}
