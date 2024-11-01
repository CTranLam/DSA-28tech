#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
int main(){
	int n,x;cin >> n >> x;
	int a[n];
	ll f[x+1]={0};// luu so cach 
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	f[0]=1;
	for(int i=1 ; i<=x ; i++){
		f[i]=0;
		for(int t : a){
			if(i>= t){
				f[i]+=f[i-t];
				f[i] %=MOD;
			}
		}
	}
	cout << f[x] << endl;
}
