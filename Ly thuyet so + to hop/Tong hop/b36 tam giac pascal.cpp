#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
int a[101][101];
void sinh(){
	for(int i=1; i<=100 ; i++){
		for(int j=1; j<=i ; j++){
			if(j==1 || j==i){
				a[i][j]=1;
			}
			else{
				a[i][j]=(a[i-1][j-1]%MOD+ a[i-1][j]%MOD)%MOD;
			}
		}
	}
}
int main(){
	sinh();
	int n; cin >> n;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=i ; j++){
			cout << a[i][j] <<" ";
		}
		cout << endl;
	}
}
