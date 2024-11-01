#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int tongcs(int n){
	int ans=0;
	while(n){
		ans+=n%10;
		n/=10;
	}
	return ans;
}
int snt(int n){
	for(int i=2 ; i<=sqrt(n) ; i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int check(int n){
	int res=tongcs(n);
	int ans=0;
	for(int i=2 ; i<=sqrt(n) ; i++){
		while(n%i==0){
			ans+=tongcs(i);
			n/=i;
		}
	}
	if(n>1) ans+=tongcs(n);
	return ans==res;
}
int main(){
	int n; cin >> n;
	if(!snt(n) && check(n)) cout << "YES" << endl;
	else cout << "NO" << endl;
}
