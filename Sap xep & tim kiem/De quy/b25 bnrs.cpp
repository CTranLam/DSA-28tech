#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int check(int a[],int n,int i,int x){
	if(i==-1) return 0;
	else{
		if(a[i]==x) return 1;
		return check(a,n,i-1,x);
	}
}

int main(){
	int n;cin >>n;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	int x; cin >> x;
	if(check(a,n,n-1,x)) cout << 1;
	else cout << 0; 
}
