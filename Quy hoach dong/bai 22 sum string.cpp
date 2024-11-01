#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s ; cin >> s;
	ll f[100]; // luu tong tao duoc tai ki tu thu i
	f[0]=s[0]-'0';
	ll sum=f[0];
	for(int i=1 ; i<s.size() ; i++){
		// f[i-1]+s[i]*i voi i+1 la o lan ki tu do xuat hien trong cac so khac
		f[i]=f[i-1]*10+ (s[i]-'0')*(i+1);
		sum+=f[i];
	}
	cout << sum << endl;
}
