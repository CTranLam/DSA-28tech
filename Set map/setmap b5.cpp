#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin>> n;
	char a[n];
	map<char , int > mp;
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
		mp[a[i]]++;
	}
	auto it=mp.begin();
	cout << it->first << " "<<it->second << endl;
	cout << endl;
	auto it2=mp.rbegin();
	cout << it2->first << " "<<it2->second << endl;
	cout << endl;
	for(auto it : mp){
		cout << it.first << " "<< it.second << endl;
	}
	cout << endl;
	for(auto it= mp.rbegin() ; it != mp.rend() ; it++){
		cout << it->first << " "<<it->second << endl;
	}
}
