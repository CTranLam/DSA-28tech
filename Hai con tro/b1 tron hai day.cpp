#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,m;
	cin >> n>>m;
	vector<int> v;
	int a[n],b[m];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	for(int i=0 ; i<m ; i++){
		cin >> b[i];
	}
	int l1=0,l2=0;
	while(l1<n && l2 <m){
		if(a[l1] >= b[l2]){
			v.push_back(b[l2]);
			++l2;
		}
		else{
			v.push_back(a[l1]);
			++l1;
		}
	}
	for(int i=l1 ; i<n ; i++){
		v.push_back(a[i]);
	}
	for(int i=l2 ; i<m ; i++){
		v.push_back(b[i]);
	}
	for(int x : v){
		cout << x <<" ";
	}
}
