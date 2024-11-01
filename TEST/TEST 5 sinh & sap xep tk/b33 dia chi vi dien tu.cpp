#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,k,final=0;
char x;
int a[10005];
void ktao(){
	for(int i=1 ; i<=k ; i++){
		a[i]=i;
	}
}
void sinh(){
	int i=k;
	while(i>=1 && a[i]==n-k+i){
		--i;
	}
	if(i==0) final=1;
	else{
		a[i]++;
		for(int j=i+1 ; j<=k ; j++){
			a[j]=a[j-1]+1;
		}
	}
}
int main(){
	cin >> n >> k >> x;
	int len=x-'a'+1;
	vector<string> vs;
	ktao();
	while(!final){
		string s="";
		for(int i=1 ; i<=k ; i++){
			s+=to_string(a[i]);
		}
		vs.push_back(s);
		sinh();
	}
	char b[10005];
	for(int i=1; i<=len ; i++){
		b[i]='a'+i-1;
	}
	vector<string> vc;
	do{
		string s="";
		for(int i=1 ; i<=len ; i++){
			s+=b[i];
		}
		vc.push_back(s);
	}while(next_permutation(b+1,b+len+1));
	for(string s : vc){
		for(string t : vs){
			cout << s <<t << endl;
		}
	}
}
