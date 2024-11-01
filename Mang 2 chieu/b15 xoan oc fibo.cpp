#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[93];
void fibo(){
	f[0]=0;
	f[1]=1;
	for(int i=2 ; i<=92 ; i++){
		f[i]=f[i-1]+f[i-2];
	}
}
int main(){
	fibo();
	int n; cin >> n;
	int ans=0;
	ll a[n+1][n+1];
	int c1=1,c2=n,h1=1,h2=n;
	while(h1<=h2 && c1<=c2){
		for(int i=c1 ; i<=c2 ; i++){
			a[h1][i]=f[ans];
			++ans;
		}
		h1++;
		for(int i=h1; i<=h2 ; i++){
			a[i][c2]=f[ans];
			++ans;
		}
		c2--;
		for(int i=c2 ; i>=c1 ; i--){
			a[h2][i]=f[ans];
			++ans;
		}
		--h2;
		for(int i=h2 ; i>=h1 ; i--){
			a[i][c1]=f[ans];
			++ans;
		}
		c1++;
	}
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=n ; j++){
			cout << a[i][j] <<" ";
		}
		cout << endl;
	}
}
