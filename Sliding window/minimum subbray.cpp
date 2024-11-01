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
	int l=0;
	ll sum=0;
	int st=0,min_len=1e9;
	for(int r=0 ; r<n ; r++){
		sum+=a[r];
		if(sum>=k){
			while(sum-a[l] >= k){ // thu hep chieu dai
				sum-=a[l];
				++l;
			}
			int len=r-l+1;
			if(len<min_len){
				min_len=len;
				st=l;
			}
		}
	}
	if(min_len==1e9) cout << -1 << endl;
	else{
		for(int i=st ; i<=st+min_len-1 ; i++){
			cout << a[i] <<" ";
		}
	}
}
