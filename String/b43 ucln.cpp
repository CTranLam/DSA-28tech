#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string n;ll m;
	cin >> n >> m;
	ll sum=0;
	for(int i=0 ; i<=n.size()-1 ; i++){
		sum=sum*10+(n[i]-'0');
		sum%=m;
	}
	cout << __gcd(sum,m);
}
