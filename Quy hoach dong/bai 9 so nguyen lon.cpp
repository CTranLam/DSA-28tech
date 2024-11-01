#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// dp[i][j]; i la vi tri o chuoi tren,j la vtri o chuoi duoi
int dp[1005][1005];
int main(){
	string s,t;
	cin >> s>> t;
	int n=s.size();
	int m=t.size();
	s="@"+s;
	t="@"+t;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
			if(s[i]==t[j]){
				dp[i][j]=dp[i-1][j-1]+1;
			}
			else{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]); // chon lay ki tu cua xau s hay xau t de max 
			}
		}
	}
	cout << dp[n][m] << endl;
}
