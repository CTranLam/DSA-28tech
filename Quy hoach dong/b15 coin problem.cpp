#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,s; cin >> n >> s;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	int f[s+1]={0}; //luu so luong dong xu de tao so luong tien la i
	f[0]=0;// tap rong 
	for(int i=1 ; i<=s ; i++){// 1 dong tien dc dung nhieu lan
		f[i]=1e9;
		for(int x : a){ 
			if(i>=x){
				f[i]=min(f[i-x]+1,f[i]);
			}
		}
	}
	if(f[s]==1e9) cout <<-1 << endl;
	else cout << f[s] << endl;
}
