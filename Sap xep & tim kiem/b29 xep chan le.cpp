#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	sort(a,a+n);
	if(n%2==0){
		for(int i=0 ; i < n/2 ; i++){
			cout << a[i] <<" "<<a[i+n/2] <<" ";
		}
	}
	else{
		for(int i=0 ; i<n/2 ; i++){
			cout << a[i] <<" "<<a[i+n/2 +1] <<" ";
		}
		cout << a[n/2] << endl;
	}
}
