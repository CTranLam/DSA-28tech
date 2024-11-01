#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,k;
	cin >> n >> k;
	int dem=0;
	int ans=-1;
	for(int i=2 ; i<=sqrt(n) ; i++){
		while(n%i==0){
			++dem;
			if(dem==k){
				ans=i;
				break;
			}
			n/=i;
		}
	}
	if(n>1){
		++dem;
		if(dem==k) ans=n;
	}
	cout << ans  <<endl;
}
