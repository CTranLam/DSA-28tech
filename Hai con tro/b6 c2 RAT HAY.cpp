#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,s;
	cin >> n >> s;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	ll cnt=0;
	ll sum=0;
	int l=0;
	// r o day thi l o dau la thoa man
	for(int r=0 ; r<n ; r++){
		sum+=a[r];
		while(sum > s){ // luon duy tri sum [l,r] <=s
			sum-=a[l];
			++l;
		}
		cnt+=r-l+1;
	}
	cout << cnt <<endl;
}
