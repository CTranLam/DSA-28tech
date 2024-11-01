#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> nhap(){
	int n;cin >> n;
	vector<int> v;
	for(int i=0 ; i<n ; i++){
		int x; cin >> x;
		v.push_back(x);
	}
	return v;
}
vector<int> chuanhoa(vector<int> v){
	vector<int> res;
	res.push_back(v[0]);
	for(int i=1 ; i<v.size() ;i++){
		if(v[i] != v[i-1]) res.push_back(v[i]);
	}
	return res;
}
void in(vector<int> v){
	for(int i=0; i<v.size() ; i++){
		cout << v[i] << " ";
	}
}
int main(){
	vector<int> v=nhap();
	vector<int> res=chuanhoa(v);
	in(res);
}
