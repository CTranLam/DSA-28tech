#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	ll sum=0;
	map<ll ,int> mp;
	ll ans=0;
	for(int i=0 ; i<n ; i++){
		sum+=a[i];
		sum=(sum%n+n)%n; // -1%3=2 k phai bang -1
		if(sum==0) ++ans;
		if(mp.count(sum)){
			ans+=mp[sum]; // do co so am nen co nhieu tong bang sum-k
		}
		mp[sum]++;
	}
	cout << ans << endl;
}
