#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	int ans=0;
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(5);
	v.push_back(10);v.push_back(20);v.push_back(50);v.push_back(100);
	v.push_back(200);v.push_back(500);v.push_back(1000);
	sort(v.begin(),v.end(),greater<int>());
	for(int x : v){
		ans+=n/x;
		n=n%x;
	}
	cout << ans << endl;
}
