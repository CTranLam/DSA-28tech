#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n ; cin >> n;
    char a[n];
	vector<pair<char,int>> v;
	for(int i=0 ; i<n ; i++){
		cin >>a[i];
		bool ok=false;
		for(auto &x : v){
			if(x.first == a[i]){
				++x.second;
				ok=true;
			}
		}
		if(!ok) v.push_back({a[i],1});
	}
	cout << v.size() << endl;
	for(pair<char,int> x : v){
		cout << x.first << " "<<x.second  << endl;
	}
}
