#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,k;
int a[1005],final=0;
void ktao(){
	for(int i=1 ; i<=k ; i++){
		a[i]=i;
	}
}
void sinh(){
	int i=k;
	while(i>=1 && a[i]==n-k+i){
		--i;
	}
	if(i==0) final=1;
	else{
	    a[i]++;
	    for(int j=i+1; j <=n ; j++){
		    a[j]=a[j-1]+1;
		}
	}
}
int main(){
	cin >> n >>k;
	ktao();
	int b[1005];
	for(int i=1; i<=k ; i++){
		cin >> b[i];
	}
	int dem=0;
	int ans=0;
	while(!final){
		++dem;
		bool check=1;
		for(int i=1 ; i<=k; i++){
			if(a[i] != b[i]) check=0;
		}
		if(check) ans=dem;
		sinh();
	}
	cout << dem-ans+1 << endl;
}
