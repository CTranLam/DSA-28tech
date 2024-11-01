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
void Try(int i,int j,string s){
	if(i==n && j==n){
		cout << s << endl;
	}
	if(i+1<=n && a[i+1][j]==1){
		s+="D";
		a[i+1][j]=0; // danh dau da di qua
		Try(i+1,j,s); // loang sang cac o khac
		// back_track
		s.pop_back(); // xoa 1 ki tu o nhanh nay de vao nhanh khac
		a[i+1][j]=1; // danh dau lai de nhanh khac co the di qua o nay
	}
	if(j-1 >=1 && a[i][j-1]==1){
		s+="L";
		a[i][j-1]=0; // danh dau da di qua
		Try(i,j-1,s);
		// back_track
		s.pop_back();
		a[i][j-1]=1;
	}
	if(j+1 <= n && a[i][j+1]==1){
		s+="R";
		a[i][j+1]=0;
		Try(i,j+1,s);
		s.pop_back();
		a[i][j+1]=1;
	}
	if(i-1 >=1 && a[i-1][j]==1){
		s+="U";
		a[i-1][j]=0;
		Try(i-1,j,s);
		s.pop_back();
		a[i-1][j]=1;
	}
}
int main(){
	nhap();
	a[1][1]=0;
	Try(1,1,"");
}
