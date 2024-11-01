#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n;
	cin >> n;
	int a[n];
	set<int> se;
	for(int &x : a){
		cin >> x;
		se.insert(x);
	}
	cout << se.size() << endl;
}
