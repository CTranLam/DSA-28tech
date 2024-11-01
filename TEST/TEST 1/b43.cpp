#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	vector<int> t;
	vector<int> s;
	for(int i=0 ; i<n; i++){
		for(int j=i+1 ; j<n; j++){
			if(a[i]<a[j]){
				s.push_back(i);
				break;
			}
		}
		for(int j=0 ; j<i ; j++){
			if(a[j] < a[i]){
			    t.push_back(i);
			    break;
			}
		}
	}
	for(int x : t){
		for(int y : s){
			if(x==y){
				cout << "28tech";
				return 0;
			}
		}
	}
	cout << "29tech";
}
