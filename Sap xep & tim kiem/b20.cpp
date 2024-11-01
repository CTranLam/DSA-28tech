#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	int a[n];
	set<int> se;
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
		se.insert(a[i]);
	}
	int l=*se.begin();
	int r=*se.rbegin();
	int target=r-l+1;
	cout << target -se.size() <<endl;
}
