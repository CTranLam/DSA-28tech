#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n ; cin >> n;
	ll sum=0;
	for(int i=1 ; i<=sqrt(n) ; i++){
		if(n%i==0){
			sum+=i;
			if(i != n/i) sum+=n/i;
		}
	}
	cout << sum << endl;
}
