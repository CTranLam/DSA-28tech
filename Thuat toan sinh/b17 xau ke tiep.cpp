#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s;cin >> s;
	int n=s.size();
	int a[n+5];
	for(int i=1 ; i<=s.size() ; i++){
		a[i]=s[i-1]-'0';
	}
	if(next_permutation(a+1,a+n+1)){
		for(int i=1 ; i<=n ; i++){
			cout << a[i];
		}
		return 0;
	}
	cout <<"NOT EXIST" << endl;
	
}
