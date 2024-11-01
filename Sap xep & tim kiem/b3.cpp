#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll tong(int a){
	ll sum=0;
	while(a){
		sum+=a%10;
		a/=10;
	}
	return sum;
}
bool cmp(int a,int b){
	if(tong(a) != tong(b)) return tong(a)<tong(b);
	else return a < b;
}
int main(){
	int n;cin >> n;
	int a[n];
	for(int &x  : a){
		cin >> x;
	}
	sort(a,a+n,cmp);
	for(int x:a){
		cout << x <<" ";
	}
}
