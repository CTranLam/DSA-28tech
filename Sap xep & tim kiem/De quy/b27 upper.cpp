#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int check(int a[],int n,int i,int x){
	if(i==n) return n;
	else{
		if(a[i]<=x) return i;
		return check(a,n,i+1,x);
	}
}

int main(){
	int n;cin >>n;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	int x; cin >> x;
	if(a[0] <= x){
		cout << n << endl;
		return 0;
	}
	else{
		cout << check(a,n,0,x)-1 <<endl;
	}
	
}
