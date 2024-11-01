#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,s,final=0;
int a[100],c[100];
void ktao(int i){
	for(int j=1 ; j<=i ; j++){
		c[j]=j;
	}
}
void sinh(int k){
	int i=k;
	while(i>=1 && c[i]==n-k+i){
		--i;
	}
	if(i==0) final=1;// cau hinh cuoi cung
	else{
		c[i]++;
		for(int j=i+1 ; j<=k ; j++){
			c[j]=c[j-1]+1;
		}
	}
}
int main(){
	cin >> n >> s;
	int ans=1e9;
	for(int i=1 ; i<=n ; i++) cin >> a[i];
	for(int i=1 ; i<=n ; i++){ // sinh ra tat ca cac cach lay tien
		ktao(i);
		while(!final){
			int sum=0,cnt=0;
			for(int j=1 ; j<=i ; j++){
				// cout << c[j];
				sum+=a[c[j]];
				++cnt;
			}
			//cout << endl;
			if(sum==s){ // do sinh tu it den nhieu
				cout << i << endl;
				return 0;
			}
            sinh(i);
		}
		final=0;
	}
	cout << -1 <<endl;
}
