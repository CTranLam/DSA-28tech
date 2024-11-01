#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n;cin >> n;
	int a[n];
	map<int,int> mp;
	int max_value=0;
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
		mp[a[i]]++;
		max_value=max(max_value,mp[a[i]]);
	}
	sort(a,a+n);
	for(int x : a){
		if(mp[x]==max_value){
			cout << x <<" "<< mp[x] << endl;
			break;
		}
	}
}
