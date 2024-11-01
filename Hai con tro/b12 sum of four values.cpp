#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int four_sum(int a[],int n, int s){
	for(int i=0 ; i<n ; i++){
		for(int j=i+1 ; j<n ; j++){
			int l=j+1,r=n-1;
			while(l<r){
				ll sum=a[i]+a[j]+a[l]+a[r];
			    if(sum==s) return 1;
			    else if(sum>s) --r;
			    else ++l;
			}
		}
	}
	return 0;
}
int main(){
	int n,s;
	cin >> n >> s;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	sort(a,a+n);
	if(four_sum(a,n,s)) cout <<"YES" <<endl;
	else cout << "NO" << endl;
}
