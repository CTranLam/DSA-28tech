#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n ; cin >> n;
	vector<string> v;
	cin.ignore();
	for(int i=0 ; i<n ; i++){
		string s;
		getline(cin,s);
		stringstream ss(s);
		string x;
		while(ss >> x){
			v.push_back(x);
		} 
	}
	sort(v.begin() , v.end());
	for(string x : v){
		cout << x << " ";
	}
	cout << endl;
	sort(v.begin() , v.end() , greater<string> ());
	for(string x : v){
		cout <<  x <<" ";
	}
}
