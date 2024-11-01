#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,x;
	cin >> n >> x;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	auto it=lower_bound(a,a+n,x);
	if(it-a==0){
		cout << -1 << endl;
	}
	else{
		if(*it==x) cout << x << endl;
		else{
			--it;
			cout << *it << endl;
		}
	}
}
