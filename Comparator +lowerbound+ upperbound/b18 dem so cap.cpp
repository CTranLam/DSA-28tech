#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,k; cin >> n >> k;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	sort(a,a+n);
	int dem=0;
	for(int i=0 ; i<n ; i++){
		int *it1=lower_bound(a,a+n,a[i]+k);
		int *it2=upper_bound(a,a+n,a[i]+k);
		if(k==0){
			dem=it2-it1;
			break;
		}
		if(it1 != a+n) dem+=it2-it1;
	}
	cout << dem <<endl;
}
