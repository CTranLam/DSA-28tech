#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,k;
	cin >> n >>k;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	multiset<int> se;
	for(int i=0 ; i<k ; i++){
		se.insert(a[i]);
	}
	auto j=next(se.begin() , (k-1)/2);
	for(int i=k ; i<=n ; i++){
		cout << (*j) <<" ";
		if(i==n) break;
		se.insert(a[i]);
		if(a[i] < *j) --j;
		if(a[i-k] <= *j) ++j;
		se.erase(se.lower_bound(a[i-k]));
	}
}
