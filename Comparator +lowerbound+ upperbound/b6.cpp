#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int check(int n){
	int dem=0;
	while(n){
		if(n%10%2==1) ++dem;
		n/=10;
	}
	return dem;
}
bool cmp(int a, int b){
	if(check(a) != check(b)) return check(a) > check(b);
	return a<b;
}
int main(){
	int n ; cin >> n;
	vector<int> v;
	for(int i=0 ; i<n ;i++){
		int x ; cin >> x;
		v.push_back(x);
	}
	sort(v.begin() , v.end() , cmp);
	for(int x : v){
		cout << x <<" ";
	}
}
