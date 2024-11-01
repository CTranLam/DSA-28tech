#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	int a[n+5];
	for(int i=1 ; i<=n ; i++){
		cin >> a[i];
	}
	if(next_permutation(a+1,a+n+1)==0){
		for(int i=1 ; i<=n ; i++){
			cout << i<<" ";
		}
	}
	else{
	    for(int i=1 ; i<=n ; i++){
		    cout << a[i] << " ";
		}
	}
}
