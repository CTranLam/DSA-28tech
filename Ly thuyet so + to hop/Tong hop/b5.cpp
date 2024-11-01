#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e6+1;
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
int main(){
	sang();
	vector<int> v;
	for(int i=0 ; i<maxn ; i++){
		if(f[i]==0) v.push_back(i);
	}
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int l=0,r=v.size()-1;
		while(l<=r){
			if(v[l]+v[r]==n){
				cout << v[l] << " "<< v[r] << endl;
				++l;
				--r;
			}
			else if(v[l] + v[r] <n) ++l;
			else --r;
		}
	}
}
