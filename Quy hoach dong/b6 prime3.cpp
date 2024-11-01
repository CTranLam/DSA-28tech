#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
ll f[1000005];
void sang(){
	f[0]=1;
	f[1]=1;
	for(int i=2 ; i<=sqrt(1000005) ; i++){
		if(f[i]==0){
			for(int j=i*i ; j<1000005 ; j+=i){
				f[j]=1;
			}
		}
	}
}
ll t[1000005];
void sinh(){
	t[0]=1;
	f[1]=1;
	for(int i=1 ; i<1000005 ; i++){
		if(f[i]==0){// la so nt
			t[i]=(t[i-1]%MOD*i%MOD)%MOD;
		}
		else{
			t[i]=t[i-1];
		}
	}
}
int main(){
	int k; cin >>k;
	sang();
	sinh(); 
	while(k--){
		int n; cin >> n;
		if(n==0 || n==1) cout << 0 << endl;
		else{
		    cout << t[n] << endl;
		}
	}
}
