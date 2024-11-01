#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e6;
int f[MOD];
int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
		f[i]=a[i];
	}
	for(int i=1 ; i<n ; i++){
		for(int j=0 ; j<i ; j++){
			if(i-j > 1){
				f[i]=max(f[j]+a[i],f[i]);
			}
		}
	}
	cout <<*max_element(f,f+n) << endl;
}
