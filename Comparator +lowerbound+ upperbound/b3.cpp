#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n, x ; cin >> n >> x;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	// pt dau >=x
	int *it1 = lower_bound(a,a+n,x);
	int pos1=it1-a;
	if(pos1 !=n) cout << pos1 << endl;
	else cout << -1 <<endl;
	// >x
	int *it2= upper_bound(a,a+n ,x);
	int pos2=it2-a;
	if(pos2 !=n) cout << pos2 << endl;
	else cout << -1 << endl;
	// dau tien =x
	int *it3=lower_bound(a,a+n,x);
	if(*it3 ==x) cout << it3-a << endl;
	else cout << -1 << endl;
	// cuoi cung =x
	int *it4=upper_bound(a,a+n , x);
	--it4;
	if(*it4==x) cout << it4-a << endl;
	else cout << -1 << endl;
	// 
	if(*it3 != x) cout << 0 << endl;
    else cout << it4 - it3+1<< endl;
}
