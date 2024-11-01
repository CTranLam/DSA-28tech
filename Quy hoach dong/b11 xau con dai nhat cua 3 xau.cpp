#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int f[105][105][105];
int main(){
	string x,y,z;
	cin >> x >> y>> z;
	int n=x.size(),m=y.size(),p=z.size();
	x="@"+x;
	y="@"+y;
	z="@"+z;
	for(int i= 1 ; i<= n ; i++ ){
		for(int j=1 ; j<=m ; j++){
			for(int k=1 ; k<=p ; k++){
				if(x[i]==y[j]&& y[j]==z[k]){
					f[i][j][k]=f[i-1][j-1][k-1]+1;
				}
				else{
					f[i][j][k]=max({f[i-1][j][k],f[i][j-1][k],f[i][j][k-1]});
				}
			}
		}
	}
	cout << f[n][m][p] << endl;
}
