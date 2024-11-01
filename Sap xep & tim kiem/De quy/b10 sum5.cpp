#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
double sum(int n){
	if(n==1) return 1;
	else return (double)1/n+sum(n-1);
}
int main(){
	int n; cin >> n;
	cout << fixed << setprecision(3) << sum(n) << endl;
}
