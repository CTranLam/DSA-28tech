#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,s;
char a[10005];
int final=0;
void ktao(){
	for(int i=1 ; i<=n ; i++){
		a[i]= 0;
	}
}
void sinh(){
	int i=n;
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
	cin >> n >> s;
	vector<int> v1;
	vector<int> v2;
	vector<pair<int,int>> v;
	for(int i=1 ; i<=n ; i++){
		int x; cin >> x;
		v1.push_back(x);
	}
	for(int i=1 ; i<=n ; i++){
		int x; cin >> x;
		v2.push_back(x);
	}
	for(int i=0 ; i<n ; i++){
		v.push_back({v1[i],v2[i]});
	}
//	for(auto it : v){
//		cout << it.first <<" "<< it.second << endl;
//	}
	int ans=INT_MIN;
	while(!final){
		int gt=0;
		int kl=0;
		for(int i=1 ; i<=n ; i++){
			if(a[i]==1){
			    kl+=v[i-1].first;
			    gt+=v[i-1].second;
			}
			if(kl<=s) ans=max(ans,gt);
		}
		sinh();
	}
	cout << ans << endl;
}
