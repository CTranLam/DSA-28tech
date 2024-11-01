#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[100];
// xau n=xau n-2 + xau n-1
char find(ll n ,ll k){
	if(n==1) return 'A';
	if(n==2) return 'B';
	if(k<=f[n-2]){ // k nam phia ben xau n-2(xau phia trc)
		return find(n-2,k); // tim kiem vi tri k o xau n-2
	}
	else return find(n-1,k-f[n-2]); // do xau n-1 o phia sau nen vi tri trong xau n-1 = k-slg xau n-2
}
int main(){
	f[1]=1;
	f[2]=1;
	// sinh so luong ki tu o xau thu i
	for(int i=3 ; i<= 92 ; i++){
		f[i]=f[i-1]+f[i-2];
	}
	ll n,k;
	cin >> n >>k;
	cout << find(n,k) << endl;
}
