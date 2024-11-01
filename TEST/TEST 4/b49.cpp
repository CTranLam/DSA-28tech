#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fa[1000001];
ll fb[1000001];
void pta(int x){
	for(int i=2 ; i<=sqrt(x) ; i++){
		while(x%i==0){
			fa[i]++;
			x/=i;
		}
	}
	if(x>1) fa[x]++;
}
void ptb(int x){
	for(int i=2 ; i<=sqrt(x) ; i++){
		while(x%i==0){
			fb[i]++;
			x/=i;
		}
	}
	if(x>1) fb[x]++;
}
int main(){
	int n,m;
	cin >> n >> m;
	int a[n],b[m];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	for(int i=0 ; i<m ; i++){
		cin >> b[i];
	}
	for(int i=0 ; i<n ; i++){
		pta(a[i]);
	}
	for(int i=0 ; i<m ; i++){
		ptb(b[i]);
	}
	for(int i=0 ; i<=1000000; i++){
		if(fa[i] != fb[i]){
			cout << "29tech" << endl;
			return 0;
		}
	}
	cout << "28tech" << endl;
}
