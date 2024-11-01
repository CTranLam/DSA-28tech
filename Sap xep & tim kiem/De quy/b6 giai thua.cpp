#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gt(int a){
	if(a==0) return 1;
	else return (ll)a*gt(a-1);
}
int main(){
	int n;cin >> n;
	cout << gt(n) << endl;
}
