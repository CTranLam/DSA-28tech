#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int check(int n){
	for(int i=2 ; i<=sqrt(n) ; i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
vector<ll> ans;
void init(){
	queue<ll> q;
	for(int x : {2,3,5,7}){
		q.push(x);
	}
	while(!q.empty()){
		ll res=q.front();// truy cap vao dau hang doi
		q.pop();
		if(res> 99999999) break;
		ans.push_back(res);
		for(int x : {1,3,5,7,9}){
			ll tmp=res*10+x;
			if(check(tmp)) q.push(tmp);
		}
	}
}
int main(){
	init();
	for(int x : ans){
		if(x>=1000 && x<=9999) cout << x << endl;
	}
}
