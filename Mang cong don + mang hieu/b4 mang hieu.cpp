#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	int d[n+1];
	d[0]=a[0];
	for(int i=1 ; i<n ; i++){
		d[i]=a[i]-a[i-1];
	}
	for(int i=0 ; i<n ; i++){
		cout << d[i] <<" ";
	}
}
