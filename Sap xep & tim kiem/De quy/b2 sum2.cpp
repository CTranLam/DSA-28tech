#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll sum(int n){
	if(n==1) return 1;
	else return n*n+sum(n-1);
}
int main(){
	int n;cin >> n;
	cout << sum(n) << endl;
}
