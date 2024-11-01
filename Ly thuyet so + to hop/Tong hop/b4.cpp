#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e7+1;
int f[maxn];
void sang(){
	f[0]=f[1]=1;
	for(int i=2 ; i<=sqrt(maxn) ; i++){
		if(f[i]==0){
			for(int j=i*i ; j<maxn ; j+=i){
				f[j]=1;
			}
		}
	}
}
int csnt(int n){
	while(n){
		int x=n%10;
		if(x != 2 && x!=3 && x!=5 && x!=7) return false;
		n/=10;
	}
	return true;
}
int main(){
	sang();
	int a,b; cin >> a >> b;
	int ans=0;
	for(int i=a ; i<=b ; i++){
		if(csnt(i) &&f[i]==0 ) ++ans;
	}
	cout << ans << endl;
}
