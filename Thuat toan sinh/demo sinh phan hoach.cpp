#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,final=0,a[10005];
int cnt; // dem so luong so hang
void ktao(){
	cnt=1;
	a[1]=n;
}
void sinh(){
	int i=cnt;
	while(i>=1 && a[i]==1){
		--i;
	}
	if(i==0) final=1;
	else{
		--a[i];
		int tmp=cnt-i+1; // so luong so 1 + so 1 vua dc tru
		cnt=i;
		int p=tmp/a[i];
		int r=tmp%a[i];
		if(p != 0){
			for(int j=1 ; j<=p ; j++){ // bieu dien tmp theo a[i]
				++cnt;
				a[cnt]=a[i];
			}
		}
		if(r != 0){
			++cnt;
			a[cnt]=r;
		}
	}
}
int main(){
	cin >> n;
	ktao();
	while(!final){
		for(int i=1 ; i<=cnt ; i++){
			cout << a[i] <<" ";
		}
		cout << endl;
		sinh();
	}
}
