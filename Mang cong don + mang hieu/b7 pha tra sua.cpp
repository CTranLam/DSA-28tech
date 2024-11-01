#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int d[200001]; // mang hieu
ll f[200001]; // mang cong don
int main(){
	int n,k,q;
	cin >> n >> k >> q;
	int a[200000]={0};
	for(int i=1 ; i<=200000 ; i++){
		if(i==0) d[i]=a[i];
		else d[i]=a[i]-a[i-1];
	}
	for(int i=1 ; i<=n ; i++){
		int l,r;
		cin >> l >> r;
		d[l]++;
		d[r+1]--;
	}
	for(int i=1 ; i<=200000 ; i++){
		if(i==1) f[i]=d[i];
		else f[i]=f[i-1]+d[i];
	}
	while(q--){
		int l,r;
		cin >> l >> r;
		int dem=0;
		for(int i=l ; i<=r ; i++){
			if(f[i] >= k) ++dem;
		}
		cout << dem << endl;
	}
}

