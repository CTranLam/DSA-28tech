#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
int n;
struct matran{
	ll a[15][15];
	friend matran operator * (matran x,matran y){
		matran res;
		for(int i=0 ; i<n ; i++){
			for(int j=0 ; j<n ; j++){
				res.a[i][j]=0;
				for(int k=0 ; k<n ; k++){
					res.a[i][j]+=x.a[i][k] * y.a[k][j];
					res.a[i][j] %=MOD;
				}
			}
		}
		return res;
	}
};
matran binpow(matran x , int k){
	if(k==1) return x;
	matran t=binpow(x,k/2);
	if(k%2==0) return t*t;
	else return t*t*x; 
}
int main(){
	int k;
	cin >> n >> k;
	matran x;
	for(int i=0 ; i<n ; i++){
		for(int j=0 ;j<n ; j++){
			cin >> x.a[i][j];
		}
	}
	matran res=binpow(x,k);
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			cout << res.a[i][j] <<" "; 
		}
		cout << endl;
	}
}