#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0 ; i<n; i++){
		cin >> a[i];
	}
	sort(a,a+n);
	int dem=0;
	for(int i=n-1 ; i>=0 ; i--){
		int r=i-1 ,l=0;
		while(l<r){
			if((a[r] + a[l] > a[i]) && a[r] >0 && a[l] >0 && a[i] >0){
			    dem+=r-l;
			    r--;
		    }
		    else{
			    ++l;
		    }
		}
	}
	cout << dem;
}
