#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	sort(a,a+n);
	int q;cin >> q;
	while(q--){
		int r ,l;cin >> r >>l;
		int *vt1=lower_bound(a,a+n,r);
		int *vt2=upper_bound(a,a+n,l);
		cout << vt2-vt1 <<endl;
	}
}
