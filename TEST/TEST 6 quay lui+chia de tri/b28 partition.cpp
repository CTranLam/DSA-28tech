#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
vector<vector<int>> ans;
vector<int> v;
int cur_sum=0;
void Try(int i){
	if(cur_sum==n){
		ans.push_back(v);
		return;
	}
	if(cur_sum>n) return;
	else{
		for(int j=1; j<=n ; j++){
			cur_sum+=j;
			v.push_back(j);
			Try(j);
			v.pop_back();
			cur_sum-=j;
		}
	}
}
int main(){
	cin >> n;
	Try(1);
	for(auto x : ans){
		for(int i=0 ; i<x.size()-1 ; i++){
			cout << x[i] <<" + ";
		}
		cout << x[x.size()-1] << endl;
	}
}
