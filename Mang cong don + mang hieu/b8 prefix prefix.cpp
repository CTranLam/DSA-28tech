#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,m,k;
	cin >> n >>m >> k;
	int a[n+5];
	for(int i=1 ; i<=n ; i++){
		cin >> a[i];
	}
	vector<pair<int,int>> v1;
	vector<int> v2;
	for(int i=1; i<=m ; i++){
		int l,r,d;
		cin >> l >> r >> d;
		pair<int,int> p;
		p.first=l;
		p.second=r;
		v1.push_back(p);
		v2.push_back(d); // thu tu v danh so thao tac luon
	}
	int q[n+5];// mang hieu
	for(int i=1 ; i<=n ; i++){
		if(i==1) q[i]=a[i];
		else q[i]=a[i]-a[i-1];
	}
//	for(int i=1; i<=n ; i++){
//		cout << q[i] <<endl;
//	}
	while(k--){
		int x,y;
		cin >> x >> y;
		--x;
		--y;
		for(int i=x; i<=y ; i++){
			int l=v1[i].first;
			int r=v1[i].second;
			int d=v2[i];
			q[l]+=d;
			q[r+1]-=d;
		}
	//	for(int i=1; i<=n ; i++){
	//		cout << q[i] << endl;
	//	}
	}
	ll f[n+5];
	for(int i=1 ; i<=n ; i++){
		if(i==1) f[i]=q[i];
		else f[i]=f[i-1]+q[i];
	}
	for(int i=1 ; i<=n ; i++){
		cout << f[i] << " ";
	}
}
