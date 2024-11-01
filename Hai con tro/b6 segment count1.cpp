#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,s ; cin >> n >> s;
	int a[n+1];
	ll sum=0;
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	a[n]=INT_MAX; // de luon vao else
	int l=0;
	int ans=0;
	for(int i=0 ; i<=n ; i++){
		sum+=a[i];
		if(sum<=s){
			++ans;
		}
		else{
			sum=0;
			i=l;
			++l;
		}
	}
	cout << ans <<endl;
}
