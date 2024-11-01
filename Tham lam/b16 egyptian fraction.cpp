#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll a,ll b){
	if(b%a==0){
		cout << 1 <<"/" << b/a;
		return;
	}
	// 1/x la phan so lon nhat nho hon a/b
	ll x= (b/a) +1;
	cout << 1 <<"/" <<x <<" + ";
	// phan so con lai la a/b - 1/x
	solve((ll)a*x-b,(ll)b*x);
}
int main(){
	int a,b;
	cin >> a >> b;
	solve(a,b);
}
