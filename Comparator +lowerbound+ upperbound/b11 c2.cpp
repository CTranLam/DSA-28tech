#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,x; cin >> n >> x;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	int *it=lower_bound(a,a+n,x);
	if(*it == x) cout << it-a << endl;
	else cout << -1 <<endl;
}
