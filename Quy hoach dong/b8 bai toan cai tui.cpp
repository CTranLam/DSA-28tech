#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int dp[1005][1005];
int main(){
	int n,s;
	cin >> n >> s;
	int w[n+1],v[n+1];
	for(int i=1; i<=n ; i++){
		cin >> w[i];
	}
	for(int i=1 ; i<=n ; i++){
		cin >> v[i];
	}
	// dp[n+1][s+1]; // gia tri lon nhat cua tui khi lua chon do vat thu 1 2 3..i va co khoi luong j
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=s ; j++){
			// k them do vat vao trong tui
			dp[i][j]=dp[i-1][j];
			// them do vat thu i vao tui vao tui
			if(j >= w[i]){
				dp[i][j]=max(dp[i][j] , dp[i-1][ j - w[i] ]+v[i]);// cai tui khi chua them w[i] vao+v[i]
			}
		}
	}
	cout << dp[n][s] << endl;
}
