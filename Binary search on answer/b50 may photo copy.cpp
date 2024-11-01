#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(int n,int x, int y, ll time){
	time-=min(x,y); // thoi gian in ra ban dau tien de bat dau chay 2 may
	// chi can in them n-1 ban nua
	return time/x + time/y >= n-1;
}
int main(){
	int n,x,y;
	cin >> n >> x >> y;
	ll l=0,r=(ll)n*min(x,y); // thoi gian may chay
	ll ans=0;
	while(l<=r){
		ll m=(l+r)/2;
		if(check(n,x,y,m)){
			ans=m;
			r=m-1;
		}
		else{
			l=m+1;
		}
	}
	cout << ans << endl;
}
