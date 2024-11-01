#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,k;
	cin >> n >> k;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	ll sum=0;
	ll max_len=0;
	int l=0;
	for(int r=0 ; r<n ; r++){
		sum+=a[r];
		while(sum > k){
			sum-=a[l];
			l++;
		}
		ll len=r-l+1;
		max_len=max(max_len,len);
	}
	cout << max_len <<endl;
}
