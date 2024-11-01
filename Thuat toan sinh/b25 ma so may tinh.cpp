#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,final=0;
char a[10005];
int b[10005];
void ktao(){
	for(int i=1 ; i<=n ; i++){
		b[i]=1;
	}
}
void sinh(){
	int i=n;
	while(i>=1 && b[i]==n){
		--i;
	}
	if(i==0) final=1;
	else{
		b[i]++;
		for(int j=i+1 ; j<=n ; j++){
			b[j]=1;
		}
	}
}
int main(){
	cin >> n;
	vector<string> vs;
	vector<string> vc;
	ktao();
	while(!final){
		string s="";
		for(int i=1 ; i<=n ; i++){
			s+=b[i]+'0';
		}
		vs.push_back(s);
		sinh();
	}
	for(int i=1 ; i<=n ; i++){
		a[i]='A'+i-1;
	}
	do{
		string s="";
		for(int i=1 ; i<=n ; i++){
			s+=a[i];
		}
		vc.push_back(s);
	}while(next_permutation(a+1,a+n+1));
	for(string x : vc){
		for(string t : vs){
			cout << x << t << endl;
		}
	}
}
