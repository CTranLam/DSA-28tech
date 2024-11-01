#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int f[10];
int main(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	for(int x : a){
		while(x){
			f[x%10]=1;
			x/=10;
		}
	}
	for(int i=0 ; i<10 ; i++){
		if(f[i] != 0) cout << i <<" ";
	}
}
