#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(int n){
	for(int i=2 ; i<=sqrt(n) ; i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int main(){
	int n ; cin >> n;
	vector<int> v;
	for(int i=0 ; i<n ; i++){
		int x;cin >> x;
		v.push_back(x);
	}
	for(int x: v){
		if(check(x)) cout << x <<" ";
	}
}
