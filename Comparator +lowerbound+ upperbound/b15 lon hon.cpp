#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,m; cin>> n >> m;
	int a[n],b[m];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	for(int i=0 ; i<m ; i++){
		cin >> b[i];
	}
	sort(b,b+m);
	for(int i=0 ; i<n ; i++){
		int *it=upper_bound(b,b+m ,a[i]);
		int pos=it-b;
		cout << m-pos<<" ";
	}
}
