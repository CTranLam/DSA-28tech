#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f(int a[],int n,int L,int cut){
	int ans=0;
	for(int i=0 ; i<n ; i++){
		if(a[i] >= cut){
			ans+=a[i]-cut;
		}
	}
	return ans >= L;
}
int main(){
	int n,L;
	cin >> n >> L;
	int a[n];
	int maxc=-1;
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
		maxc=max(maxc,a[i]);
	}
	ll lc=0,rc=maxc;
	ll ans=-1;
	while(lc <= rc){ // cang cat len cao cang thu dc it go
		int mc=(lc+rc)/2;
		if(f(a,n,L,mc)){
			ans=mc;
			lc=mc+1;
		}
		else rc=mc-1;
	}
	cout << ans << endl;
}
