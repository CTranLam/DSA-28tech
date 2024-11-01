#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,l;
	cin >> n >> l;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	sort(a,a+n);
	double d=max(a[0]-0,l-a[n-1]); // khoang cach giua 2 den dau va cuoi duong den dau va cuoi duong
    for(int i=0 ; i<n ; i++){
    	d=max(d,(double)(a[i]-a[i-1])/2); // ban kinh max
	}
	cout << fixed << setprecision(10) << d << endl;
}
