#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	multiset<int> se;
	for(int i=0 ; i<n ; i++){
		int x; cin >> x;
		se.insert(x);
	}
	for(int x : se){
		cout << x <<" ";
	}
}
