#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(string s){
	for(int i=1 ; i<=s.size() ; i++){
		if(abs(s[i]-s[i-1])==1) return 0;
	}
	return 1;
}
int main(){
	int n; cin >> n;
	int a[n+5];
	for(int i=1 ; i<=n ; i++){
		a[i]=i;
	}
	vector<string> v;
	do{
		string s="";
		for(int i=1 ; i<=n ; i++){
			s+=a[i]+'0';
		}
		if(check(s)) v.push_back(s);
	}while(next_permutation(a+1,a+n+1));
	for(string x : v){
		cout << x << endl;
	}
}
