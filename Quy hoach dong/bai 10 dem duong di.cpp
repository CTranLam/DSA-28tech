#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char a[1005][1005];
int dx[2]={0,1};
int dy[2]={1,0};
const int MOD=1e9+7;
int n,m,cnt;
int dp[1005][1005];
void dfs(){
	dp[1][1]=1;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
		 	if(a[i][j]=='*'){
				dp[i][j]+=dp[i][j-1]+dp[i-1][j];
				dp[i][j]%=MOD;
			}
		}
	}
}
int main(){
	cin >> n >> m;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
			cin >> a[i][j];
		}
	}
	if(a[n][m] != '*' || a[1][1] != '*'){
		cout << 0 << endl;
		return 0;
	}
	dfs();
	cout << dp[n][m] << endl;
}
