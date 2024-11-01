#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cmp(pair<int,int> a,pair<int,int> b){
	return a.second<b.second;
}
int main(){
	int n;
	cin >> n;
	pair<int,int> a[n];
	for(int i=0 ; i< n ;i++){
		cin >> a[i].first >>a[i].second;
	}
	sort(a,a+n,cmp);
	int st=a[0].first;
	int end=a[0].second;
	int ans=1;
	for(int i=1 ; i<n ; i++){
		if(a[i].first > end){
			++ans;
			end=a[i].second;
		}
	}
	cout << ans << endl;
}
