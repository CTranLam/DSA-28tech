#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6+5;
const int MOD=1e9+7;
int mp[N];
int a[N];
int main(){
	int n; cin >> n;
	int maxn=0;
	for(int i=1 ; i<=n ; i++){
		cin >> a[i];
		mp[a[i]]++;
		maxn=max(maxn,a[i]);
	}
	for(int i=maxn ; i>=1 ; i--){
		int cnt=0;
		for(int j=i ; j<=maxn ; j+=i){ // xet cac boi cua i
		    if(mp[j] >=2){
		    	cout << j << endl;
		    	return 0;
			}
			if(mp[j]==1) ++cnt;
			if(cnt>=2){ // co 2 boi cua i
				cout << i << endl;
				return 0;
			}
		}
	}
}
