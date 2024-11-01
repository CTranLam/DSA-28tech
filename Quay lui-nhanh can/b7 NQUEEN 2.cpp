#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[1000][1000];
int ans=0,res=0;
int cot[1000],xuoi[1000],nguoc[1000];
void nhap(){
	for(int i=1 ; i<=8 ; i++){
		for(int j=1 ; j<=8 ; j++ ){
			cin >> a[i][j];
		}
	}
}
void Try(int i){
	for(int j=1 ; j<=8 ; j++){// cac kha nang cua cot 1
		if(cot[j]==0 && xuoi[i-j+8]==0 && nguoc[i+j-1]==0){
			res+=a[i][j];
			cot[j]=1;
			xuoi[i-j+8]=1;
			nguoc[i+j-1]=1;
			if(i==8){ // hang=8
				ans=max(ans,res);
			}
			else{
				Try(i+1);
			}
			res-=a[i][j];
			cot[j]=0;
			xuoi[i-j+8]=0;
			nguoc[i+j-1]=0;
		}
	}
}
int main(){
	nhap();
	Try(1);// quay lui tu hang 1
	cout << ans << endl;
}
