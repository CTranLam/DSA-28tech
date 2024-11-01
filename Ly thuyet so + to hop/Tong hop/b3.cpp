#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e7+1;
int f[maxn]; // do mang danh dau nen sang dc toi da 1e7
void sang(){ // do phuc tap(nlogn)
	f[1]=1;
	f[0]=1; // k sang 0 1;
	for(int i=2 ; i<=sqrt(maxn) ; i++){
		if(f[i]==0){
			for(int j=i*i ; j<maxn ; j+=i){
				f[j]=1;
			}
		}
	}
}
int main(){
	sang();
	int t; cin >> t; 
	while(t--){
		int n; cin >> n;
		if(f[n]==0) cout <<"YES" <<endl;
		else cout <<"NO" <<endl;
	}
}
