#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
int dx[2]={1,0};
int dy[2]={0,1};
ll f[1005][1005]; // luu so cach toi o i va j neu o nay tm yc
int n;
char a[1005][1005];
int main(){
	cin >> n;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=n ; j++){
			cin >> a[i][j];
		}
	}
	for(int i=1 ; i<=n ; i++){
		for(int j=1; j<=n ; j++){
			if(i==1 && j==1 && a[i][j]=='.') f[i][j]=1;
			else{
				if(a[i][j]=='.'){
					f[i][j]+=f[i][j-1]+f[i-1][j];
					f[i][j]%=MOD;
				}
			}
		}
	}
	cout << f[n][n] << endl;
}
