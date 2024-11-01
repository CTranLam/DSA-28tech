#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0 ; i<n ; i++) cin >> a[i];
	int st=a[0];
	for(int i=1 ; i<n ; i++){
		if(a[i] < st){
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
}
