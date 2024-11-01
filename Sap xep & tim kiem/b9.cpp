#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n;cin >> n;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	sort(a,a+n);
	int q;cin >> q;
	while(q--){
		int x ; cin >> x;
		int *it=lower_bound(a,a+n,x);
		if(*it==x){
			cout << "YES" << endl;
		}
		else cout <<"NO" <<endl;
	}
}
