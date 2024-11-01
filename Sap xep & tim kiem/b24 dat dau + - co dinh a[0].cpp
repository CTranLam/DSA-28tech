#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,k; cin >> n >> k;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	ll sum=a[0]; // k duoc dat dau vao a[0]
	sort(a+1,a+n,greater<int>());
	int cong=k;
	int tru=n-1-k;
	int i=1;
	while(cong != 0){
		sum+=a[i];
		++i;
		--cong;
	}
	while(tru != 0){
		sum-=a[i];
		++i;
		--tru;
	}
	cout << sum << endl;
}
