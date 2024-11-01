#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,k; cin >> n >> k;
	int a[n];
	for(int &x : a) cin >> x;
	sort(a,a+n);
	for(int i=0 ; i<n ; i++){
		auto it=lower_bound(a+i+1,a+n,k+a[i]);
		if(*it==k+a[i]){
			cout <<1 <<endl;
			return 0;
		}
	}
	cout <<-1 << endl;
}
