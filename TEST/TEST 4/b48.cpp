#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n,k;
	cin >> n >> k;
	ll a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	sort(a,a+n);
	ll sum=0;
	int index=0;
	for(int i=0 ; i<n ; i++){
		sum+=a[i];
		if(sum>k){
			index=i-1;
			break;
		}
	}
	cout << index+1 << endl;
}
