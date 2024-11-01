#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,s,t,a[21][21];
int ans=0;
void loang(int i,int j){
	a[i][j]=1;
	ans++;
	int dx[4]={-1,-1,1,1};
	int dy[4]={-1,1,1,-1};
	for(int k=0 ; k<4 ; k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=1 && j1>=1 && i1<=n && j1<=n && a[i1][j1] == 0){
			loang(i1,j1);
		}
	}
}
int main(){
	cin >> n >> s >> t;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=n ; j++){
			cin >> a[i][j];
		}
	}
	loang(s,t);
	cout << ans << endl;
}
