#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m, x[100];
char a[100][100];
string target;
bool used[100][100];
int ok=0;
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
void Try(int i,int j,int pos, string sum){
	used[i][j]=1;
	if(sum== target){
		ok=1;
		return;
	}
	if(ok) return;
	for(int k=0 ; k<4 ; k++){
		int i1 = i+dx[k];
		int j1 = j+dy[k];
		if(i1 >=1 && i1<=n && j1>=1 && j1<=m && used[i1][j1]==0 && target[pos]==a[i1][j1]){
			Try(i1,j1,pos+1, sum+a[i1][j1]);
		}
	}
	used[i][j]=0;
}
int main(){
	cin >> n >> m;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
			cin >> a[i][j];
		}
	}
	cin >> target;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
			string tmp="";
			Try(i,j,0,tmp);
		}
	}
	if(ok) cout << "YES";
	else cout <<"NO";
}
