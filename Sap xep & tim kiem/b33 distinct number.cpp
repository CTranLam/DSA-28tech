#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	set<int> se;
	for(int i=0 ; i<n ; i++){
		int x ; cin >> x;
		se.insert(x);
	}
	cout << se.size() << endl;
}
