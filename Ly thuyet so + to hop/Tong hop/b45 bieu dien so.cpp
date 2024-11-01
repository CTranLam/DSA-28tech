#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	// n=11x+111y
	int ok=0;
	for(int x=0 ; x<=n/11 ; x++){
		int y=(n-x)/111;
		if(11*x + 111*y==n){
			cout << "YES" << endl;
			return 0;
		}
	}
	cout <<"NO" << endl;
}
