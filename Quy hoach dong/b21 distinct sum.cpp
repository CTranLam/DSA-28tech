#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	int a[n];
	int s=0;
	for(int i=0 ; i< n ; i++){
		cin >> a[i];
		s+=a[i];
	}
	int f[s+1]={0};
	f[0]=1;// tap rong 
	for(int i=0 ; i<n ; i++){
		for(int j=s ; j>=a[i] ; j--){
			if(f[j-a[i]]==1){
				f[j]=1;
			}
		}
	}
	set<int> se;
	for(int i=0 ; i<=s ; i++){
		if(f[i]==1){
			cout << i << " ";
		}
	}
}
