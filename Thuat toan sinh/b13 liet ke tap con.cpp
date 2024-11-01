#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n; int a[1005];
int final=0;
void ktao(int k){
	for(int i=1; i<=k ; i++){
		a[i]=i;
	}
}
void sinh(int k){
	int i=k;
	while(i>=1 && a[i]==n-k+i){
		i--;
	}
	if(i==0) final=1;
	else{
		a[i]++;
		for(int j=i+1 ; j<=n ; j++){
			a[j]=a[j-1]+1;
		}
	}
}
int main(){
	cin >> n;
	vector<string> v;
	for(int i=1 ; i<=n ; i++){
		ktao(i);
		while(!final){
			string s="";
			int dem=0;
			for(int j=1 ; j<=i ; j++){
				s+=a[j]+'0';
				if(a[j] != 0) ++dem;
			}
			if(dem !=0) v.push_back(s);
			sinh(i);
		}
		final=0;
	}
	sort(v.begin(),v.end());
	for(string x : v){
		for(int i=0 ; i<x.size(); i++){
			cout << x[i] <<" ";
		}
		cout << endl;
	}
}
