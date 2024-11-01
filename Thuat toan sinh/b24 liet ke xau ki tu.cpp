#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char c; int k;
int final=0;
char a[10005];
void ktao(int n){
	for(int i=1 ; i<=k ; i++){
		a[i]='A';
	}
}
void sinh(int n){
	int i=k;
	while(i>=1 && a[i]==c){
		--i;
	} 
	if(i==0) final=1;
	else{
		a[i]++;
		for(int j=i+1 ; j<=k ; j++){
			a[j]='A';
		}
	}
}
int main(){
	cin >> c >> k;
	int n=c-'A'+1;
	ktao(n);
	while(!final){
		for(int i=1 ; i<=k ; i++){
			cout << a[i];
		}
		cout << endl;
		sinh(n);
	}
}
