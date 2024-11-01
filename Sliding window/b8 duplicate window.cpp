#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int d[1000005];
int check(int a[] , int n , int k){
	for(int i=0 ; i<k ; i++){
		d[a[i]]++;
		if(d[a[i]]==2) return 1;
	}
	for(int i=k; i<n ; i++){
		d[a[i]]++;
		d[a[i-k]]--;
		if(d[a[i]]==2) return 1;
	}
	return 0;
}
int main(){
	int n,k;
	cin >> n >> k;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	if(check(a,n,k+1)) cout << "YES";
	else cout << "NO";
}
