#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
int main(){
	int n; cin >> n;
	pair<pair<int,int>,int> v[n];
	for(int i=0 ; i<n ; i++){
		int sum=0;
		cin >> v[i].first.first >> v[i].first.second >> v[i].second;
		sum= sum +v[i].first.first + v[i].first.second + v[i].second;
		cout << sum << " ";
	}
}
