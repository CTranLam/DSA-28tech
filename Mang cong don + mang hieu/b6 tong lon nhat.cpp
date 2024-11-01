#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int d[1000001]; // mang hieu
int dem[1000001]; // mang tan xuat
int main(){
	int n,q; cin >> n >> q;
	int a[n+1];
	for(int i=1 ; i<=n ; i++){
		cin >> a[i];
	}
	while(q--){ // dung mang hieu de tranh dung for -> k toi uu
		int l,r; cin >> l >> r ;
		d[l]+=1;
		d[r+1]-=1;
	}
	for(int i=1 ; i<=n ; i++){
		if(i==1) dem[1]=d[i];
		else dem[i]=dem[i-1]+d[i];
	}
	sort(a+1,a+n+1);
	sort(dem+1,dem+n+1);
	ll sum=0;
	for(int i=1 ; i<=n ; i++){
		sum+=(ll)a[i]*dem[i];
	}
	cout << sum <<endl;
}
