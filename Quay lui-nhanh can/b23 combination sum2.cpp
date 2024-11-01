#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,k;
int cur_sum=0;
vector<int> v;
vector<vector<int>> ans;
int used[30];
int cnt=0;
int f[1000];
void sang(){
	f[0]=1;
	f[1]=1;
	for(int i=2 ; i<=sqrt(n) ; i++){
		if(f[i]==0){
			for(int j=i*i ; j<=n ; j+=i){
				f[j]=1;
			}
		}
	}
}
void Try(int i){
	if(cnt==k){
		if(cur_sum==n){
			ans.push_back(v);
		}
		return;
	}
	for(int j=i ; j<=n ; j++){
		if(f[j]==0){
			cur_sum+=j;
			cnt++;
			v.push_back(j);
			Try(j+1);
			v.pop_back();
			cur_sum-=j;
			cnt--;
		}
	}
}
int main(){
	cin >> n >> k;
	sang();
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
