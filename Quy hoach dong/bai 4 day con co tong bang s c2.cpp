#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int f[505][10005];// f[i][j] luu xem den i co tim duoc tong la j khong
// c1 truy tu f[x-a[i]] de tim f[x]
int main(){
	int n,s;
	cin >> n >> s;
	int a[n+1];
	for(int i=1 ; i<=n ; i++){
		cin >> a[i];
	}
	// luon dat ra cu hoi la chon hay khong chon phan tu nay
	for(int i=1 ; i<=n ; i++){
		f[i][0]=1; // k chon bat ki 1 phan tu nao 
	}
	for(int i=1 ; i<=n ; i++){
		for(int j=1; j<=s ; j++){
			if(j>=a[i]){
				f[i][j]=f[i-1][j-a[i]] || f[i-1][j];
				// true neu i-1 phan tu dau tao duoc j-a[i] hoac tao luon dc j
			}
			else f[i][j]=f[i-1][j];
//			cout << i <<" "<<j<< " "<<f[i][j] << endl;
		}
	}
	cout << f[n][s] << endl;
}
