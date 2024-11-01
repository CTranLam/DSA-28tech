#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	vector<int> v;
	for(int i=0 ; i<=n/4 ; i++){
		int y=(n-4*i)/7;
		if(4*i + y*7==n){
			string s="";
			for(int j=1 ; j<=i ; j++){
				s+="4";
			}
			for(int j=1 ; j<=y ; j++){
				s+="7";
			}
			cout << s;
			return 0;
		}
	}
	cout << -1 << endl;
}
