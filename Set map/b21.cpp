#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n;cin >> n;
	set<char> se;
	for(int i=0 ; i<n ; i++){
		char x; cin >> x;
		se.insert(x);
	}
	cout << se.size() << endl;
	for(char x : se){
		cout<< x <<" ";
	}
	cout << endl;
	for(auto it=se.rbegin() ; it != se.rend() ; it++){
		cout << *it << " ";
	}
}
