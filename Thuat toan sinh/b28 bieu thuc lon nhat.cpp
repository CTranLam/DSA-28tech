#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[100],final=0;
void ktao(){
	for(int i=1 ; i<=3 ; i++){
		a[i]=0;
	}
}
void sinh(){
	int i=3;
	while(i>=1 && a[i]==1){
		a[i]=0;
		--i;
	}
	if(i==0) final=1;
	else{
		a[i]=1;
	}
}
int main(){
	int n=4;
	vector<int> v;
	for(int i=1 ; i<=4 ; i++){
		int x; cin >> x;
		v.push_back(x);
	}
	ll ans=INT_MIN;
	ktao();
	while(!final){
		ll sum=v[0];
		for(int i=1 ; i<=3 ; i++){
			if(a[i]==1) sum+=v[i];
			else sum-=v[i];
		}
		ans=max(ans,sum);
		sinh();
	}
	cout << ans << endl;
}
