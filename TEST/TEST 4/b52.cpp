#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int start(int a[] ,int n){
	int index=-1;
	for(int i=0 ; i<n-1 ; i++){
		if(a[i] > a[i+1]) return i;
	}
	return index;
}
int end(int a[],int n){
	int index=n-1;
	for(int i=1 ; i<n ; i++){
		if(a[i] < a[i-1]) index=i;
	}
	return index;
}
int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >>a[i];
	}
	int st=start(a,n);
	int ed=end(a,n);
	if(st==-1){
		cout << "28tech" << endl;
		return 0;
	}
	else{
		int l=st;
		int r=ed;
		while(l<r){
			int tmp=a[l];
			a[l]=a[r];
			a[r]=tmp;
			++l;
			--r;
		}
		for(int i=1 ; i<n ; i++){
			if(a[i] < a[i-1]){
				cout << "29tech" <<endl;
				return 0;
			}
		}
		cout << "28tech" << endl;
	}
}

