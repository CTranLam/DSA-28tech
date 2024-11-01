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
	if(tmp==ans) return 1;
	else return 0;
}
int lp(int n){
	int sum=0;
	int dem6=0;
	while(n){
		int x=n%10;
		if(x==6) ++dem6;
		sum+=x;
		n/=10;
	}
	if(dem6 != 0 && sum%10 == 8) return 1;
	else return 0;
}
int main(){
	int a,b;
	cin >> a >> b;
	for(int i=a ; i<=b ; i++){
		if(tn(i) && lp(i)) cout << i <<" ";
	}
}
