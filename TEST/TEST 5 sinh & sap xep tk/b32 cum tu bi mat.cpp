#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;int a[10005];
int final=0;
void ktao(){
	for(int i=1 ; i<=6 ; i++){
		a[i]=1;
	}
}
void sinh(){
	int i=6;
	while(i>=1 && a[i] == n){
		--i;
	}
	if(i==0) final=1;
	else{
		a[i]++;
		for(int j=i+1 ; j<=6 ; j++){
			a[j]=1;
		}
	}
}
int main(){
	cin >> n;
	string b[10005];
	for(int i=1 ; i<=n ; i++){
		cin >> b[i];
	}
	sort(b+1,b+n+1);
	ktao();
	vector<string> v;
	while(!final){
		string s="";
		for(int i=1 ; i<=6 ; i++){
			s+=b[a[i]]+" ";
		}
		v.push_back(s);
		sinh();
	}
	for(string x : v){
		cout << x << endl;
	}
}
