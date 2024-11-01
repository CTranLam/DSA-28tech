#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,x ; cin >> n >> x;
	int a[n];
	for(int i=0 ; i< n ; i++){
		cin >> a[i];
	}
	int *it=upper_bound(a,a+n,x);
	if(it != a) cout << *(--it) <<endl;
	else cout << "NOT FOUND"<<endl;
}
