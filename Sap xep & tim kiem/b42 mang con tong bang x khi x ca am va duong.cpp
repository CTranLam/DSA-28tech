#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,k;
	cin >> n >>k;
	int a[n];
	for(int &x : a) cin >> x;
	ll sum=0;
	map<ll ,int> mp;
	int ans=0;
	for(int i=0 ; i<n ; i++){
		sum+=a[i];
		if(sum==k) ++ans;
		if(mp.count(sum-k)){
			ans+=mp[sum-k]; // do co so am nen co nhieu tong bang sum-k
		}
		mp[sum]++;
	}
	cout << ans << endl;
}
