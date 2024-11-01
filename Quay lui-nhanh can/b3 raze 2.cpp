#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,a[1000][1000],ok=0;
void nhap(){
	cin >> n;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=n ; j++){
			cin >> a[i][j];
		}
	}
}
void Try(int i,int j,string s){
	if(i==n && j==n) cout << s << endl;
	if(i+1 <=n && a[i+1][j]==1){
		s+="D";
		a[i+1][j]=0; // danh dau lai da di qua r k di lai
		Try(i+1,j,s);
		a[i+1][j]=1; // backtrack
		s.pop_back(); // xoa di 1 ki tu de vao nhanh khac
	}
	if(j-1 >= 1 && a[i][j-1] ==1){
		s+="L";
		a[i][j-1]=0;
		Try(i,j-1,s);
		s.pop_back();
		a[i][j-1]=1;
	}
	if(j+1 <=n && a[i][j+1] ==1){
		a[i][j+1]=0;
		s+="R";
		Try(i,j+1,s);
		s.pop_back();
		a[i][j+1]=1;
	}
	if(i-1 >=1 && a[i-1][j] ==1){
		a[i-1][j]=0;
		s+="U";
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
