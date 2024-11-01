#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
int main(){
	string s;
	cin >> s;
	for(int i=0 ; i<s.size() ;i++){
		int vt=-1; // vd 6982491
		for(int j=i+1 ; j<s.size() ; j++){
			if(s[j] >= s[vt]){
				vt=j; // tim vt lon nhat cuoi cung
			}
		}
		if(s[i] < s[vt]){
			swap(s[i] ,s[vt]);
			break;
		}
	}
	cout << s;
}
