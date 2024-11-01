#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
const int N=1e6+5;
int f[N];// f[i] luu so cach tao ra tong i
int main(){
	int n; cin >> n;
	for(int i=1 ; i<=6 ; i++) f[i]=1;
	for(int i=1; i<=n ; i++){
		for(int j=1 ; j<=6 ; j++){
			if(i>=j){
				f[i]+=f[i-j];
				f[i] %= MOD;
			}
		}
	}
	cout << f[n] << endl;
}
