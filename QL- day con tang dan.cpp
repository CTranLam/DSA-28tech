#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int a[50];
vector<int> v;
vector<string> res;
void Try(int i){
	if(i==n+1){
		if(v.size() >= 3){
			string s="";
			for(int j=1 ; j<v.size() ; j++){
				s+=to_string(v[j])+" ";
			}
			res.push_back(s);
		}
		return;
	}
	if(a[i] > v.back()){
		v.push_back(a[i]);
		Try(i+1);
		v.pop_back();
	}
	Try(i+1);
}
int main(){
	cin >> n;
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	v.push_back(0);
	Try(0);
	sort(res.begin(),res.end());
	for(string s : res){
		cout << s <<endl;
	}
}
