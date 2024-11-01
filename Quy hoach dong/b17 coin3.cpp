#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
int main(){
	int n,s; cin >> n >> s;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	int f[s+1]={0};// luu so cach de tao nen so tien i
	f[0]=1;
	// mot so duoc su dung nhieu lan
	for(int coin : a){
		for(int i=1 ; i<=s ; i++){ // moi a[i] chi xet voi 1 coin tren 1 luot
			if(i>=coin){
				f[i]+=f[i-coin];
				f[i]%=MOD;
			}
		}
	}
	cout << f[s] << endl;
}
