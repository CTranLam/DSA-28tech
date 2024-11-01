#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char a[50][50];
int used[50][50];
int n,m;
string s;
int ok=0;
int dx[4]={0,0,-1,1};
int dy[4]={-1,1,0,0};
void Try(int i,int j,int pos,string tmp){
	used[i][j]=1;
	if(tmp==s){
		ok=1;
		return;
	}
	if(ok) return;
	for(int k=0 ; k<4 ; k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=0 && i1<n && j1>=0 && j1<m && used[i1][j1]==0 && s[pos]==a[i1][j1]){
			Try(i1,j1,pos+1,tmp+a[i1][j1]);
		}
	}
	used[i][j]=0;
}
int main(){
	cin >> n >> m;
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			cin >> a[i][j];
		}
	}
	cin >> s;
	for(int i=0 ; i<n ; i++){
		for(int j=0; j<m ; j++){
			string tmp="";
			Try(i,j,0,tmp);
		}
	}
	if(ok){
		cout << "YES" <<endl;
		return 0;
	}
	cout <<"NO" <<endl;
}
