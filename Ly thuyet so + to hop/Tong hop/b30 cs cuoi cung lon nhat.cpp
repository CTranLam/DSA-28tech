#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e7+1;
ll f[maxn];
void sang(){
	f[1]=f[0]=1;
	for(int i=2 ; i<=sqrt(maxn) ; i++){
		if(f[i]==0){
			for(int j=i*i ; j<maxn ; j+=i){
				f[j]=1;
			}
		}
	}
}
int check(int n){
	int maxn=-1;
	int x=n%10;
	while(n){
		maxn=max(maxn,n%10);
		n/=10;
	}
	if(maxn==x) return 1;
	else return 0;
}
int main(){
	sang();
	int n; cin >> n;
	int dem=0;
	for(int i=0 ; i<=n ; i++){
		if(f[i]==0 && check(i)){
			cout << i <<" ";
			++dem;
		}
	}
	cout << endl;
	cout << dem << endl;
}
