#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	string a[n+5];
	for(int i=1 ; i<=n ; i++){
		cin >> a[i];
	}
	sort(a+1,a+n+1);
	do{
		for(int i=1 ; i<=n ; i++){
			cout << a[i] <<" ";
		}
		cout << endl;
	}while(next_permutation(a+1,a+n+1));
}
