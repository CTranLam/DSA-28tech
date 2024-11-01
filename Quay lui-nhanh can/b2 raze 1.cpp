#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,a[1000][1000];
void nhap(){
	cin >> n;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=n ; j++){
			cin >> a[i][j];
		}
	}
}
void Try(int i,int j, string s){
	if(i==n && j==n) cout << s << endl;
	if(i+1 <= n && a[i+1][j]==1){
		s+="D";
		Try(i+1,j,s);
		s.pop_back();
	}
	if(j+1 <=n && a[i][j+1]==1){
		s+="R";
		Try(i,j+1,s);
		s.pop_back();
	}
}
int main(){
	nhap();
	Try(1,1,"");
}
