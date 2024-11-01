#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
int a[10005],b[10005];
int cnt[10];
ll dem(int a){
	if(a==0) return 0;
	if(a==1) return cnt[0];
	auto it=upper_bound(b,b+m,a);
	ll ans=cnt[0]+cnt[1];
	int pos=it-b;
	ans+=m-pos;
	if(a==2) ans-=(cnt[3]+cnt[4]);
	if(a==3) ans+=cnt[2];
	return ans ;
}
int main(){
	cin >> n >> m;
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	for(int i=0 ; i<m ; i++){
		cin >> b[i];
		if(b[i] < 5) cnt[b[i]]++;
	}
	sort(b,b+m);
	ll ans=0;
	for(int i=0 ; i<n ; i++){
		ans+=dem(a[i]);
	}
	cout << ans << endl;
}
