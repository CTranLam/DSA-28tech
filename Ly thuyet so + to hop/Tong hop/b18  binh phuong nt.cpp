#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mu(int n){
	for(int i=2 ; i<=sqrt(n) ;i++){
		int mu=0;
		while(n%i==0){
			mu++;
			n/=i;
		}
		if(mu>=2) return 1;
	}
	return 0;
}
int main(){
	int a,b;
	cin >> a >> b;
	for(int i=a; i<=b ; i++){
		if(mu(i)) cout << i <<" ";
	}
}
