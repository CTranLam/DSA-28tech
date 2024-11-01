#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n; cin >> n;
	int x=sqrt(n);
	if((ll)x*x==n) cout << "YES" <<endl;
	else cout << "NO" <<endl;
}
