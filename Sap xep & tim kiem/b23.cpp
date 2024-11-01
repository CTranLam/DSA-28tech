#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cmp(pair<int,int> a,pair<int,int> b){
	if(a.second != b.second) return a.second > b.second;
	else return a.first<b.first;
}
bool cmp2(pair<int,int> a ,pair<int,int> b){
	return a.second > b.second;
}
int main(){
	int n; cin >> n;
	int a[n];
	map<int,int> mp;
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
		mp[a[i]]++;
	}
	vector<pair<int,int>> v1;
	vector<pair<int,int>> v2;
	for(int x : a){
		if(mp[x] != 0){
		    v1.push_back({x,mp[x]});
		    v2.push_back({x,mp[x]});
		    mp[x]=0;
		}
	}
	sort(v1.begin(),v1.end(),cmp);
	for(auto x : v1){
		while(x.second != 0){
			cout << x.first <<" ";
			x.second--;
		}
	}
	cout << endl;
	stable_sort(v2.begin(),v2.end(),cmp2);
	for(auto x : v2){
		while(x.second !=0 ){
			cout << x.first <<" ";
			x.second--;
		}
	}
}
