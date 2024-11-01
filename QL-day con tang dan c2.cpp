#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,a[25];
vector<string> ans;
vector<int> v;
int cnt=0;
void Try(int i){
	for(int j=i+1 ; j<=n ; j++){
		if(a[j] > a[i]){
			v.push_back(a[j]);
			if(v.size() >=2){
				string s="";
				for(int x : v){
					s+=to_string(x) +" ";
				}
				ans.push_back(s);
			}
			Try(j);
			v.pop_back();
		}
	}
}
int main(){
	cin >> n;
	for(int i=1 ; i<=n ; i++){
		cin >> a[i];
	}
	for(int i=1 ; i<=n ; i++){
		v.push_back(a[i]);
		Try(i);
		v.clear();
	}
	sort(ans.begin(),ans.end());
	for(auto x : ans){
		cout << x << endl;
	}
}
