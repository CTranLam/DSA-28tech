#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,s; cin >> n >> s;
	int a[n];
	for(int i=0 ; i< n ; i++){
		cin >> a[i];
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
	if(f[s]){
		cout <<"1" << endl;
	}
	else cout << "0" << endl;
}
