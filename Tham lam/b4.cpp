#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,k;
	cin >> n >>k;
	int a[n];
	for(int &x : a){
		cin >> x;
	}
	sort(a,a+n,greater<int>());
	int x=n-k;
	if(x>k) swap(x,k);
	ll sum=0;
	for(int i=0 ; i<k ; i++){
		sum+=a[i];
	}
	for(int i=k ; i<n ; i++){
		sum-=a[i];
	}
	cout << sum << endl;
}
