#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,k;
	cin >> n >> k;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	sort(a,a+n);
	int l=0;
	int r=n-1;
	int check=0;
	while(l<r){
		if(a[l] +a[r]==k){
			check=1;
			break;
		}
		else if(a[l] + a[r] <k){
			++l;
		}
		else r--;
	}
	if(!check) cout <<"NO";
	else cout << "YES";
}
