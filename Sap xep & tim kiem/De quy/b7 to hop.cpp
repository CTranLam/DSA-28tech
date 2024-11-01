#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int ckn(int n,int k){
	if(k==0 || k==n) return 1;
	else return ckn(n-1,k-1)+ckn(n-1,k);
}
int main(){
	int n,k;
	cin >> n >> k;
	cout << ckn(n,k) << endl;
}
