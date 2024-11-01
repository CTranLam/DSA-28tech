#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cmp(pair<int,int> a,pair<int,int> b){
	return a.second < b.second;
}
int main(){
	int n; cin >> n;
	vector<pair<int,int>> v;
	for(int i=0 ; i<n ; i++){
		int x,y; cin >> x >> y;
		v.push_back({x,y});
	}
	sort(v.begin() ,v.end(),cmp);
	int end=v[0].second;
	int ans=1;
	for(int i=1 ; i<v.size() ; i++){
		if(v[i].first > end){
			++ans;
			end=v[i].second;
		}
	}
	cout << ans << endl;
}
