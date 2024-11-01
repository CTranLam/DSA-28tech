#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
int c[1001][1001];
void khoitao(){
	// c[i][j] to hop chap j cua i
	for(int i=0 ; i<=1000 ;i++){
		for(int j=0 ; j<=i ; j++){
			if(j==0 || j==i) c[i][j]=1;
			else{
				c[i][j]=c[i-1][j-1]+c[i-1][j];
				c[i][j]%=MOD;
			}
		}
	}
}
int main(){
	khoitao();
	int t ; cin >> t; // so luong test case lon nen xay dung tam giac pascal
	while(t--){
		int n,k;
		cin >> n >> k; // to hop chap k cua n;
		cout << c[n][k] <<endl;
	}
}
