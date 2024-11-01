#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[10];
int nt(int n){
	for(int i=2 ; i<=sqrt(n) ; i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
void pt(int x){
	for(int i=0 ; i<10 ; i++){
		if(nt(i)){
			while(x%i==0){
				f[i]++;
				x/=i;
			}
		}
	}
}
int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	for(int i=0 ; i<n ; i++){
		pt(a[i]);
	}
	cout << min(f[2] ,f[5]) <<endl;
}
