#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<pair<int,int>> v;
int dem=0;
void chuyen12(int n){
	if(n==1) return;
	else{
		v.push_back({1,2});
		++dem;
		chuyen12(n-1);
	}
}
void chuyen13(int n){
	v.push_back({1,3});
	++dem;
}
void chuyen23(int n){
	if(n==1) return;
	else{
		v.push_back({2,3});
		++dem;
		chuyen23(n-1);
	}
}
int main(){
	int n;cin >> n;
	chuyen12(n);
	chuyen13(n);
	chuyen23(n);
	cout << dem << endl;
	for(auto x : v){
		cout <<x.first <<" "<< x.second << endl;
	}
}
