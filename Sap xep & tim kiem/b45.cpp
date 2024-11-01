#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >>n;
	int a[n];
	map<int,int> mp;
	int l=0;
	int ans=0;
	int len=0;
	for(int r=0 ; r<n ; r++){
		cin >> a[r];
		mp[a[r]]++;
		++len;
		while(mp[a[r]] != 1){
			mp[a[l]]--;
			++l;
			--len;
		}
		ans=max(ans,len);
	}
	cout << ans << endl;
}
