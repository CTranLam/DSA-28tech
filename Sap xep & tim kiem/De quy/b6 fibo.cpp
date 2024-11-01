#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fibo(int n){
	if(n==1 || n==2) return n-1;
	else return fibo(n-1) + fibo(n-2);
}
int main(){
	int n;cin >> n;
	cout << fibo(n) << endl;
}
