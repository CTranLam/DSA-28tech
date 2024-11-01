#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
char a[505][505];
int visited[505][505];
int s1,s2,t1,t2;
void init(){
	cin >> n >>m;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j <=m ; j++ ){
			cin >> a[i][j];
			if(a[i][j]=='S'){
				s1=i;s2=j;
			}
			if(a[i][j]=='T'){
				t1=i;t2=j;
			}
		}
	}
}
int dx[4]={0,0,-1,1};
int dy[4]={1,-1,0,0};
int ok=0;
void backtrack(int i,int j,int cnt,int prev){
	if(cnt>3) return; // do ban dau gan la -1 nen tinh doi huong 1 lan nua
	if(i==t1 && j==t2){
		ok=1;
		return;
	}
	if(ok) return;
	a[i][j]='*';
	for(int k=0 ; k<4 ; k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=1 && i1<=n && j1>=1 && j1<=m && a[i1][j1] !='*'){ // TH dau . va chu T
			if(prev==k) backtrack(i1,j1,cnt,k);
			else backtrack(i1,j1,cnt+1,k);
		}
	}
	a[i][j]='.'; // tra lai trang thai ban dau khi quay lui
}
int main(){
	init();
	backtrack(s1,s2,0,-1);
	if(ok) cout << "YES" << endl;
	else cout << "NO" << endl;
}
