#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int snt( ll n){
	for(int i=2 ; i<=sqrt(n) ; i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int hoanhao(ll n){
	for(int p=1 ; p<=33 ; p++){ // sinh ra het cac so hoan hao tu 1 den 9*10^18
		if(snt(p)){
			ll tmp1=pow(2,p)-1;
			if(snt(tmp1)){
				ll tmp2=pow(2,p-1);
				if(tmp1*tmp2==n) return 1;
			}
		}
	}
	return 0;
}
int main(){
	ll n; cin >> n;
	if(hoanhao(n)) cout << "YES" << endl;
	else cout << "NO" << endl;
}
