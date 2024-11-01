#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	ll sum=0;
	int i=1;
	while(28*i <=n){
		sum+=28*i;
		++i;
	}
	cout << sum <<endl;
}
