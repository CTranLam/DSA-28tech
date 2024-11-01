#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,m,k;
	cin >> n >>m >>k;
	int a[n],b[m];
	for(int i=0 ; i<n ; i++) cin >> a[i];
	for(int i=0 ; i<m ; i++) cin >> b[i];
	int l=0,r=0;
	vector<int> v;
	while(l<n && r<m){
		if(a[l] <= b[r]){
			v.push_back(a[l]);
			++l;
		}
		else{
			v.push_back(b[r]);
			++r;
		}
	}
	for(int i=l; i<n ; i++) v.push_back(a[i]);
	for(int i=r; i<m ; i++) v.push_back(b[i]);
	cout << v[k-1] << endl;
}
