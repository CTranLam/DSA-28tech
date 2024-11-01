#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	int a[n],b[n-1];
	for(int i=1 ; i<=n ; i++){
		cin >> a[i];
	}
	for(int i=1 ; i<=n-1 ; i++){
		cin >> b[i];
	}
	if(n==1){
		cout << 1;
		return 0;
	}
	sort(a+1,a+n+1);
	sort(b+1,b+n);
	for(int i=1 ; i<=n-1 ; i++){
		if(a[i] != b[i]){
			cout << i <<endl;
			return 0;
		}
	}
	cout << n << endl;
}
