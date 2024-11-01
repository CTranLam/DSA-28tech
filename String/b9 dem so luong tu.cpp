#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s; getline(cin,s);
	stringstream ss(s);
	string x;
	int dem=0;
	while(ss >> x){
		++dem;
	}
	cout << dem <<endl;
}
