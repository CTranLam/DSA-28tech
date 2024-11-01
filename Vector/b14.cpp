#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<char> nhap(){
	vector<char> v;
	char c;
	while(cin >> c){
		v.push_back(c);
	}
	return v;
}
vector<char> thaydoi(vector<char> &x){
	for(char &c : x){
		if(islower(c)) c=toupper(c);
		else if(isupper(c)) c=tolower (c);
	}
	return x;
}
void in(vector<char> x){
	for(char c : x){
		cout << c <<" ";
	}
}
int main(){
	vector<char> v=nhap();
	vector<char> res=thaydoi(v);
	in(res);
}
// phai ctrl z +enter moi kthuc dc(cach de kthuc dau vao)
