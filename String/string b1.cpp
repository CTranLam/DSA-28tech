#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s; getline(cin,s);
	int demc=0,dems=0,demkt=0;
	for(char x : s){
		if(isdigit(x))++dems;
		if(isalpha(x))++demc;
		if( !isdigit(x) && !isalpha(x)) ++demkt;
	}
	cout << demc <<" "<<dems <<" "<<demkt <<endl;
}
