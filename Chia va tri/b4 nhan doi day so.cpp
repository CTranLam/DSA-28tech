#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,k;
ll find(ll n,ll k){
	if(k==pow(2,n-1)) return n;
	else if(k<pow(2,n-1)) return find(n-1,k);
	else return find(n-1,k-pow(2,n-1));
}
int main(){
	cin >> n >> k;
	cout << find(n,k) << endl;
}
