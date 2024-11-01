#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(int a[],int n,int l,int r){
	if(l>r) return 1;
	else{
		if(a[l] != a[r]) return 0;
		 return check(a,n,l+1,r-1);
	}
}
int main(){
	int n; cin >> n;
	int a[n+5];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	if(check(a,n,0,n-1)) cout <<"YES" << endl;
	else cout << "NO" << endl;
}
