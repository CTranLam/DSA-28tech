#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,k;cin >> n >>k;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	sort(a,a+n);
	int check=false;
	for(int i=0 ; i<n ; i++){
		int x=k-a[i];
		int *pos=lower_bound(a+i+1,a+n,x); // ung voi moi a[i] tim x tu i+1->n thoa man 
		if(*pos==x){
			check=true;
		}
	}
	if(!check) cout << "NO" <<endl;
	else cout << "YES" <<endl;
}
