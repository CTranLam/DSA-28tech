#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int check(int a[],int n,int i){
	if(i==0) return 1;
	else{
		if(a[i]<=a[i-1]) return 0;
		return check(a,n,i-1);
	}
}

int main(){
	int n;cin >>n;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	if(check(a,n,n-1)) cout << "YES";
	else cout << "NO"; 
}
