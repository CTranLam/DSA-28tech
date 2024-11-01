#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s; getline(cin,s);
	for(char &x : s){
		x=toupper(x);
	}
	cout <<s << endl;
	for(char &x : s){
		x=tolower(x);
	}
	cout << s << endl;
}
