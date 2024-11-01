#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int dau(int a[],int n,int i,int x){
	if(i==n) return n;
	else{
		if(a[i] == x) return i;
		return dau(a,n,i+1,x);
	}
}
int cuoi(int a[],int n,int i,int x){
	if(i==n) return n;
	else{
		if(a[i]>x) return i;
		return cuoi(a,n,i+1,x);
	}
}
int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	int x; cin >> x;
	if(dau(a,n,0,x) != n){
		cout << cuoi(a,n,0,x)-dau(a,n,0,x) <<endl;
	}
	else{
	    cout << 0 << endl;
	}
}
