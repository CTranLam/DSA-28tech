#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll maxn(ll n){
	if(n<10) return n;
	else return max(maxn(n/10),n%10);
}
ll minn(ll n){
	if(n<10) return n;
	else return min(minn(n/10),n%10);
}
int main(){
	ll n; cin >> n;
	cout << maxn(n) <<" "<<minn(n) << endl;
}
