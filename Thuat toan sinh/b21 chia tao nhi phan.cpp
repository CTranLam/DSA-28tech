#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int a[10005],final=0;
void ktao(){
	for(int i=1 ; i<=n ; i++){
		a[i]=0;
	}
}
void sinh(){
	int i=n;
	while(i>=1 && a[i]==1){
		a[i]=0;
		--i;
	}
	if(i==0) final=1;
	else{
		a[i]=1;
	}
} // su dung sinh nhi phan 0 la 1 nhom va 1 la 1 nhom 
// cap nhat min trong cac truong hop
int main(){
	cin >>n;
	ktao();
	int b[1005];
	for(int i=1 ; i<=n ; i++){
		cin >> b[i];
	}
	ll ans =LLONG_MAX;
	while(!final){
		ll sum0=0,sum1=0;
		for(int i=1 ; i<=n ; i++){
			if(a[i]==1){
				sum1+=b[i];
			}
			else sum0+=b[i];
		}
		ans=min(ans,abs(sum1-sum0));
		sinh();
	}
	cout << ans << endl;
}
