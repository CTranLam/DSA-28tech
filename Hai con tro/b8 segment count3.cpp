#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n,k; cin >> n >>k;
	ll a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	ll cnt=0;
	ll ans=0;
	ll dem[100001]={0};
	int l=0,r;
	for(r=0 ; r<n ; r++){
		dem[a[r]]++;
		if(dem[a[r]]==1) ++cnt;
		while(cnt>k){ //luon duy tri dung
			if(dem[a[l]]==1) --cnt;
			dem[a[l]]--;
			l++;
		}
		ans+=r-l+1; // so mang con co so ptu khac nhau <=k
	}
	cout << ans << endl;
}
