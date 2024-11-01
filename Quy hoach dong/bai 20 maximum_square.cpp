#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[505][505];
int f[505][505]; // f[i][j] luu kich thuoc cua hinh vuong tai o i j
int main(){
	int n,m;
	cin >> n >> m;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
			cin >> a[i][j];
			if(a[i][j]==1){
				f[i][j]=1;
			}
		}
	}
	int max_value=0;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ;j<=m ; j++){
			if(a[i][j]==1){
				// lay f min cua 3 o xung quanh de no bao ham dc tat ca
				// hinh vuong 3*3 co the chua 2*2 nhung ngc lai thi khong
				// + them 1 de ra kich thuoc cua hinh vuong tai i j
				f[i][j]=min({f[i-1][j],f[i][j-1],f[i-1][j-1]})+1;
			}
			max_value=max(max_value,f[i][j]);
		}
	}
	cout << max_value << endl;
}
