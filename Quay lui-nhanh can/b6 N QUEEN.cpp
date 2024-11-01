#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// x[1] hang 1 dat o cot nao
int n,x[1000],cot[1000],xuoi[1000],nguoc[1000],cnt=0;
void Try(int i){
	for(int j=1 ; j<=n ; j++){
		if(cot[j]==0 && xuoi[i-j+n]==0 && nguoc[i+j-1]==0){
			x[i]=j;
			cot[j]=1;
			xuoi[i-j+n]=1;
			nguoc[i+j-1]=1;
			if(i==n){
				++cnt; // so cau hinh
			}
			else Try(i+1);
			cot[j]=0;
			xuoi[i-j+n]=0;
			nguoc[i+j-1]=0;
		} 
	}
}
int main(){
	cin >> n ;
	Try(1); // quay lui tu hang 1
	cout << cnt << endl;
}
