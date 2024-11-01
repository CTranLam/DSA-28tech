#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	int a[n+5];
	int tmp=n;
	for(int i=1 ; i<=n ; i++){
		a[i]=tmp;
		tmp--;
	}
	do{
		for(int i=1 ; i<=n ; i++){
			cout << a[i];
		}
		cout << endl;
	}while(prev_permutation(a+1,a+n+1));
}
