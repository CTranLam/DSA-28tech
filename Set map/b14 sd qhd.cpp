#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n ; cin >> n;
	int a[n];
	for(int i=0 ; i<n ;i++){
		cin >> a[i];
	}
	int f[n];
	set<int> se;
	for(int i=n-1; i>=0 ; i--){
		se.insert(a[i]);
		f[i]=se.size(); // f[i] luu so ptu khac nhau tu i den n-1
	}
	int t;cin >> t;
	while(t--){
		int x ; cin >> x;
		cout << f[x] << endl;
	}
}
