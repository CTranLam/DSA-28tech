#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,k;
	cin >> n >> k;
	int a[n];
	for(int i=0 ; i<n ;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	int l=0,r=k-1;
	int minx=INT_MAX;
	while(r<n){
		minx=min(minx,a[r]-a[l]);
		++l;
		++r;
	}
	cout << minx << endl;
}
