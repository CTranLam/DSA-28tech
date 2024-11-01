#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
const int N=1e6+5;
map<int,int> mp;
int p[N];// luu so nguyen to nho nhat cua N
void sang(){
	for(int i=0 ; i<N; i++) p[i]=i;
	for(int i=2 ; i<=sqrt(N) ; i++){
		for(int j=i*i ; j<=N ; j+=i){
			p[j]=min(p[j],i);
		}
	}
}
void phantich(int a){
	while(a != 1){
		mp[p[a]]++;
		a/=p[a];
	}
}
int main(){
	sang();
	int n; cin >> n;
	int a[n];
	ll ans=1;
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
		phantich(a[i]);
	}
	for(auto x : mp){
		ans*=(x.second+1);
		ans%=MOD;
	}
	cout << ans << endl;
}
