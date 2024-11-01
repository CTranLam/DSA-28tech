#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	sort(a,a+n);
	int cur=a[0]; // thoi gian doi
	int ans=1;
	while(true){
		auto it=lower_bound(a+1,a+n,cur);
		if(it-a != n){
			++ans;
			cur+=*it;
		}
		else break;
	}
	cout << ans << endl;
}
