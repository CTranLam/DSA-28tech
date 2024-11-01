#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int tn(int n){
	int ans=0;
	int tmp=n;
	while(n){
		ans=ans*10+n%10;
		n/=10;
	}
	if(ans==tmp) return 1;
	else return 0;
}
int check(int n){
	int dem=0;
	for(int i=2 ; i<=sqrt(n) ; i++){
		if(n%i==0){
			++dem;
			while(n%i==0){
				n/=i;
			}
		}
	}
	if(n>1) ++dem;
	if(dem >= 3) return 1;
	else return 0;
}
int main(){
	int a,b;
	cin >> a >> b;
	int kt=false;
	for(int i=a; i<=b ; i++){
		if(tn(i) && check(i)){
			kt=true;
			cout << i << " ";
		}
	}
	if(!kt) cout << -1 << endl;
}
