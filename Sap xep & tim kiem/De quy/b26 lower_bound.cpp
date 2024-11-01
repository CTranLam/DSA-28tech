#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int check(int a[],int n,int i,int x){
	if(i==n) return n;
	else{
		if(a[i]>=x) return i;
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
	cout << check(a,n,0,x); 
}
