#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,k;
	cin >> n >>k;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	map<int,int> mp;
	ll ans=0,dem=0;
	int l=0;
	for(int r=0 ; r<n ; r++){
		mp[a[r]]++;
		if(mp[a[r]]==1) ++dem;
		while(dem>k){
			if(mp[a[l]]==1){
				--dem;
			}
			mp[a[l]]--;
			l++;
		}
		ans+=r-l+1;
	}
	cout << ans << endl;
}
