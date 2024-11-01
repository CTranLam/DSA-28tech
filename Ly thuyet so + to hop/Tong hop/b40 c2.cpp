#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n; cin >> n;
	int du=n%4;
	if(du==1) cout << 8;
	else if(du==2) cout << 4;
	else if(du==3) cout << 2;
	else cout << 6;
}
