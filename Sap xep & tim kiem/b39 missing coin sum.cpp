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
	ll sum=0;
	for(int i=0 ; i<n ; i++){
		if(a[i] > sum +1){
			cout << sum+1 << endl;
			return 0;
		}
		else{
			sum+=a[i];
		}
	}
	cout << sum+1 << endl;
}
