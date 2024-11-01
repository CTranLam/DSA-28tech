#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,x;
int a[50];
vector<int> v;
vector<string> ans;
void Try(int pos,int sum){
	if(sum==x){
		string s="";
		s+="{";
		for(int i=0 ; i<v.size() ; i++){
			if(i==v.size()-1) s+=to_string(v[i]) +"}";
			else s+=to_string(v[i])+" ";
		}
		ans.push_back(s);
		return;
	}
	else if(sum < x){
		for(int i=pos ; i<n ; i++){
			v.push_back(a[i]);
			sum+=a[i];
			Try(i,sum); // cong het co a[i]
			sum-=a[i];
			v.pop_back();
		}
	}
}
int main(){
	cin >> n >> x;
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	sort(a,a+n);
	Try(0,0);
	if(ans.size()==0) cout <<-1 <<endl;
	else{
		cout << ans.size() <<endl;
		for(string x : ans){
			cout << x <<endl;
		}
	}
}
