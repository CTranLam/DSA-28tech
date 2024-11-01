#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
int main(){
	int n; cin >> n;
	vector<int>v;
	for(int i=0 ; i<n ; i++){
		int x; cin >> x;
		v.push_back(x);
	}
	cout << *min_element(v.begin() , v.end()) << endl;// do min_element tra ve iterator
	cout << *max_element(v.begin() , v.end()) << endl;
	cout << accumulate(v.begin() , v.end(),0);
	
}
