#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int k, a[10005];
int d[10005];
int main(){
    cin >> n >> k;
	for(int i=1 ; i<=k ; i++){
		cin >> a[i];
		d[a[i]]=1;
	}
	ll dem=0;
	int i=k;
	while(i>=1 && a[i]==n-k+i){
		--i;
	}
	if(i==0){
		cout << k << endl;
		return 0;
	}
	else{
		a[i]++;
		for(int j=i+1 ; j<=n ; j++){
			a[j]=a[j-1]+1;
		}
	}
	for(int i=1 ; i<=k ;i++ ){
		if(!d[a[i]]){ // so sanh su xuat hien chu k phai so sanh gia tri tai cac vi tri
			++dem;
		}
	}
	cout << dem << endl;
}
