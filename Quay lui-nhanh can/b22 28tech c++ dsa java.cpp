#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[93];
string find(ll n,ll k){
	if(n==1)return "28tech";
	if(n==2) return "C++";
	if(n==3){
		if(k==1) return "DSA";
		else return "JAVA";
	}
	if(k <= f[n-3]) return find(n-3,k);
	else if(k<= f[n-2]) return find(n-2,k-f[n-3]);
	else return find(n-1,k-f[n-3]-f[n-2]);
}
int main(){
	int t;cin >> t;
	while(t--){
	ll n,k;
	cin >> n >> k;
	f[1]=1;
	f[2]=1;
	f[3]=2;
	for(int i=4 ; i<=61 ; i++){
		f[i]=f[i-1]+f[i-2]+f[i-3];
	}
	cout << find(n,k) << endl;
}
//for(int i=1 ; i<=61 ; i++){
//	cout << f[i] <<" ";
//}
}
