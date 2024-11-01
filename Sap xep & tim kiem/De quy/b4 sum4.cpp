#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll sum(int n){
	if(n==0) return 0;
	if(n%2==1) return -n+sum(n-1);
	else return n+sum(n-1);
}
int main(){
	int n;cin >> n;
	cout << sum(n) << endl;
}
