#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
int n,k; 
struct matran{
	ll a[15][15];
	friend matran operator * (matran x,matran y){
		matran tmp;
		for(int i=0 ; i<n ; i++){
			for(int j=0 ; j<n ; j++){
				tmp.a[i][j]=0;
				for(int k=0 ; k<n ; k++){
					tmp.a[i][j]+=x.a[i][k]*y.a[k][j];
					tmp.a[i][j] %= MOD;
				}
			}
		}
		return tmp;
	}
};
matran bin_pow(matran x,int n){
	if(n==1) return x;
	matran a=bin_pow(x,n/2);
	if(n%2==0) return a*a;
	return a*a*x;
}
int main(){
	cin >> n >> k;
	matran tmp;
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			cin >> tmp.a[i][j];
		}
	}
	matran ans=bin_pow(tmp,k);
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			cout << ans.a[i][j] <<" ";
		}
		cout << endl;
	}
}
