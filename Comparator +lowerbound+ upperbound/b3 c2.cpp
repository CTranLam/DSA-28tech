#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int lower(int a[] , int l , int r ,int x){
	int res=-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m] >=x){
			res=m;
			r=m-1;
		}
		else l=m+1;
	}
	return res;
}
int upper(int a[], int l , int r, int x){
	int res=-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m] > x){
			res=m;
			r=m-1;
		}
		else l=m+1;
	}
	return res;
}
int first(int a[], int l , int r, int x){
	int res=-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]==x){
			res=m;
			r=m-1;
		}
		else if(a[m]>x) r=m-1;
		else l=m+1;
	}
	return res;
}
int last(int a[] , int l ,int r, int x){
	int res=-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m] == x){
			res=m;
			l=m+1;
		}
		else if(a[m] > x) r=m-1;
		else l=m+1;
	}
	return res;
}
int main(){
	int n ,x; cin >> n >> x;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	cout << lower(a,0,n-1,x) << endl;
	cout << upper(a,0,n-1,x) << endl;
	cout << first(a,0,n-1,x) << endl;
	cout << last(a,0,n-1 , x)<< endl;
	if(first(a,0,n-1,x)==-1) cout << 0 << endl;
	else cout << last(a,0,n-1,x)-first(a,0,n-1,x) + 1 <<endl; 
}
