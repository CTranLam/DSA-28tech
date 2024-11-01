#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,k;
int cur_sum=0;
vector<int> v;
vector<vector<int>> ans;
int used[30];
int cnt=0;
void Try(int i){
	if(cnt==k){
		if(cur_sum==n){
			ans.push_back(v);
		}
		return;
	}
	for(int j=i ; j<=9 ; j++){
			cur_sum+=j;
			cnt++;
			v.push_back(j);
			Try(j+1);
			v.pop_back();
			cur_sum-=j;
			cnt--;
	}
}
int main(){
	cin >> n >> k;
	Try(1);
	if(ans.size()==0){
		cout <<"NOT FOUND";
		return 0;
	}
	for(auto it : ans){
		for(int i=0 ; i<it.size()-1 ; i++){
			cout << it[i] <<" + ";
		}
		cout << it[it.size()-1] << endl;
	}
}
