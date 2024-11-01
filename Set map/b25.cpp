#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n;cin >> n;
	set<int> se;
	for(int i=0 ; i<n; i++){
		int x; cin >> x;
		se.insert(x);
	}
	cout << se.size() << endl;
	cout << *se.rbegin() <<" "<<*se.begin() <<endl;
	auto it1=se.rbegin();
	++it1;
	auto it2=se.begin();
	++it2;
	cout<<*it1 <<" "<<*it2 <<endl;
}

