#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n ;
	int a[n+5];
	int b[n+5];
	for(int i=1 ; i<=n ; i++){
		cin >> b[i];
	}
	for(int i=1 ; i<=n ; i++){
		a[i]=i;
	}
	int dem=0;
	do{
		bool ok=1;
		++dem;
		for(int i=1 ; i<=n ; i++){
			if(a[i] != b[i]){
				ok=0;
			}
		}
		if(ok==1){
			cout << dem << endl;
			return 0;
		}
	}while(next_permutation(a+1,a+n+1));
}

