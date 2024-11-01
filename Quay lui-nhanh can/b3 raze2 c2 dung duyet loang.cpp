#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,a[1000][1000];
int ok=1;
void nhap(){
	cin >> n;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=n ; j++){
			cin >> a[i][j];
		}
	}
}
int dx[4]={1,0,0,-1};
int dy[4]={0,-1,1,0};
string t="DLRU";
void Try(int i,int j,string s){
	if(i==n && j==n){
		cout << s << endl;
		ok=0;
	}
	for(int k=0 ; k<4 ; k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1 >= 1 && i1<=n && j1 >=1 && j1 <= n && a[i1][j1]==1){
			s+=t[k];
			a[i1][j1]=0;
			Try(i1,j1,s);
			// back track
			s.pop_back();
			a[i1][j1]=1;
		}
	}
}
int main(){
	nhap();
	a[1][1]=0;
	Try(1,1,"");
	if(ok) cout << -1 << endl;
}
