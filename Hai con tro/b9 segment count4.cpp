#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// so mang con lien tiep ma do chenh lech giua ptu min va max <=k
int main(){
	int n,k; cin >> n >> k;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	ll ans=0;
	int l=0,r;
	multiset<int> se;
	for(r=0; r<n ; r++){
		se.insert(a[r]);
		while(*se.rbegin()-*se.begin() > k){
			auto it=se.find(a[l]);
			se.erase(it);
			++l;
		}
		ans+=r-l+1;
	}
	cout << ans << endl;
}
