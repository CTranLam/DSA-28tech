#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin>> n;
	int a[n+5];
	for(int i=1 ; i<=n ; i++){
		cin >> a[i];
	}
	int i=n-1;
	while(i>=1 && a[i]>a[i+1]){ // tim thang dung truoc lon hon thang dung sau dau tien de doi cho
		--i;
	}
	if(i==0){
		for(int i=1 ; i<=n ; i++){
			cout << i  <<" ";
		}
	}
	else{
		int j=n;
		while(a[i]>a[j]){ // tim thang dau tien > a[i]
			--j;
		}
		swap(a[i],a[j]);
		// do tu i+1 -> n la day giam dan nen lat nguoc lai
		reverse(a+i+1,a+n+1);
		for(int i=1 ; i<=n ; i++){
		    cout << a[i] <<" ";
		}
	}
}
