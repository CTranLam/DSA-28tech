#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,k;
	cin >> n >> k;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	int sum=0;
	int ans=0;
	int l=0,r=0;
	for(int r=0 ; r<n ; r++){
		sum+=a[r];
		while(sum>k){
			sum-=a[l];
			++l;
		}
		if(sum==k){
			++ans;
		}
	}
	cout << ans << endl;
}
