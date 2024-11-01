#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s;
	cin >> s;
	map<char,int> mp;
	for(char x : s){
		mp[x]++;
	}
	int maxc=0;
	for(auto x : mp){
		maxc=max(maxc,x.second);
	}
	int n=s.size();
	// qua nhieu truong hop dung nen ta xet TH sai 
	if(maxc > (n+1)/2)	cout << "NO" << endl;
	else cout << "YES" <<endl;
}
