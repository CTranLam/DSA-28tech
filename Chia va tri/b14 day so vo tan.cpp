#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int const MOD=1e9+7;
struct matran{
	ll a[2][2];
	friend matran operator * (matran x,matran y){
		matran res;
		for(int i=0 ; i<2 ; i++){
			for(int j=0 ; j<2 ; j++){
				res.a[i][j]=0;
				for(int k=0 ; k<2 ; k++){
					res.a[i][j] +=x.a[i][k] * y.a[k][j];
					res.a[i][j] %=MOD; 
				}
			}
		}
		return res;
	}
};
matran binpow(matran x, int n){
	if(n==1) return x;
	matran t=binpow(x,n/2);
	if(n%2==0) return t*t;
	else return t*t*x;
}
int main(){
	int n; cin >>n;
	// tim so fibo thu n bang ma tran
	matran x;
	x.a[0][0]=1;
	x.a[0][1]=1;
	x.a[1][0]=1;
	x.a[1][1]=0;
	matran ans=binpow(x,n);
	cout << ans.a[0][1] << endl;
}
