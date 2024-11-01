#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string x,y;
	cin >> x >> y;
	int n=x.size(),m=y.size();
	x="@"+x;
	y="@"+y;
	int f[n+1][m+1];
	for(int i= 0 ; i<= n ; i++ ){
		for(int j=0 ; j<=m ; j++){
			if(i==0 || j==0){
				f[i][j]=0;
			}
			else{
				if(x[i]==y[j]){
					f[i][j]=f[i-1][j-1]+1;
				}
				else{
					f[i][j]=max(f[i-1][j],f[i][j-1]);
				}
			}
		}
	}
	cout << f[n][m] << endl;
}
