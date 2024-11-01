#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,a[30][30];
int hang[30],cot[30],xuoi[30],nguoc[30];
void in(){
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=n ; j++){
			if(a[i][j]==1) cout << "Q";
			else cout <<"." ;
		}
		cout << endl;
	}
}
void Try(int i){
	if(i==n+1){
		in();
		cout << endl;
	}
	for(int j=1 ; j<=n ; j++){
		if(cot[j]==0 &&xuoi[i-j+n]==0 && nguoc[i+j-1]==0){
			a[i][j]=1;
			cot[j]=1;
			xuoi[i-j+n]=1;
			nguoc[i+j-1]=1;
			Try(i+1);
			a[i][j]=0;
			cot[j]=0;
			xuoi[i-j+n]=0;
			nguoc[i+j-1]=0;
		}
	}
}
int main(){
	cin >> n;
	Try(1);
}
