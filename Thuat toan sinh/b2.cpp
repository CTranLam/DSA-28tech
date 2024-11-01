#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,k; cin >> n >> k;
	int a[n+5];
	for(int i=1; i<=k ; i++){
		cin >> a[i];
	}
	int i=k;
	while(i>=1 && a[i]==n-k+i){
		--i;
	}
	if(i==0){
		for(int i=1 ; i<=k ; i++){
			cout << i <<" ";
		}
		return 0;
	}
	else{
		a[i]++;
		for(int j=i+1 ; j<=n ; j++){
			a[j]=a[j-1]+1;
		}
		for(int i=1;i<=k ; i++){
			cout << a[i] <<" ";
		}
	}
}
