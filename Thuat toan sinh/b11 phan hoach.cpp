#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,a[10005],final=0;
int cnt; // dem sl phan tu
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
		a[i]--;
		int tmp=cnt-i+1; // so luong so 1 bo di + 1 don vi tru di
		cnt=i; // coi chi con i phan tu
		int q=tmp/a[i];
		int r=tmp%a[i];
		if(q != 0){ // bieu dien q theo a[i]
			// cong them q so a[i] vao sau phan tu a[i]
			for(int j=1 ; j<=q ; j++){
				++cnt;
				a[cnt]=a[i];
			}
		}
		if(r!=0){
			++cnt;
			a[cnt]=r;
		}
	}
}
int main(){
	cin >> n;
	ktao();
	int ans=0;
	while(!final){
		++ans;
		sinh();
	}
	cout << ans << endl;
	final=0;
	ktao();	
	while(!final){
		for(int i=1 ; i<cnt ; i++){
			cout << a[i] <<"+";
		}
		cout << a[cnt];
		cout << endl;
		sinh();
	}
}
