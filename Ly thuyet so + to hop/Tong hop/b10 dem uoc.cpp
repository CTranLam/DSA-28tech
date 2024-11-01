#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int kt(int n){
	for(int i=2 ; i<=sqrt(n) ; i++){
		if(n%i==0) return i;
	}
	return n;
}
int main(){
	int n ; cin >> n ;
	for(int i=1 ; i<=n ; i++){
		cout << kt(i) << endl;
	}
}
