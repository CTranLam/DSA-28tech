#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int x,a[100005];
int final=0;
void ktao(int n){
	for(int i=1 ; i<=n ; i++){
		a[i]=0;
	}
}
void sinh(int n){
	int i=n;
	while(i>=1 && a[i]==8){
		a[i]=0;
		--i;
	}
	if(i==0) final=1;
	else{
		a[i]=8;
	}
}
int main(){
	int t;cin >> t;
	while(t--){
		cin >> x;
		for(int i=3 ; i<=20 ; i++){
			ktao(i);
			bool ok=0;
			while(!final){
				ll ans=0;
				for(int j=1 ; j<=i ; j++){
					ans=ans*10+a[j];
				}
				if(ans%x==0 && ans !=0){
					cout << ans << endl;
					ok=1;
					break;
				}
				sinh(i);
			}
			if(ok) break;
			final=0;
		}
	}
}
