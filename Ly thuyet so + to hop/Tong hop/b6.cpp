#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool snt(int n){
	for(int i=2 ; i<= sqrt(n) ; i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int check(int n){
	int sum=0;
	while(n){
		int x=n%10;
		if(x !=2 && x!=3 && x!=5 && x!=7) return 0;
		sum+=x;
		n/=10;
	}
	if(snt(sum)) return 1;
	else return 0;
}
int main(){
	int a,b; cin >> a >> b;
	int ans=0;
	for(int i=a; i<=b ; i++){
		if(check(i) && snt(i)) ++ans;
	}
	cout << ans << endl;
}
