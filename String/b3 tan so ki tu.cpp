#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int f[256];
int t[256];
int main(){
	string s; getline(cin,s);
	for(char &x : s){
		f[x]++;
		t[x]++;
	}
	for(int i=0 ; i<256 ; i++){
		if(f[i] != 0){
			cout << (char)i <<" "<<f[i] <<endl;
			f[i]=0;
		}
	}
	cout << endl;
	for(char x : s){
		if(t[x] !=0){
			cout << x <<" "<<t[x]<<endl;
			t[x]=0;
		}
	}
}
