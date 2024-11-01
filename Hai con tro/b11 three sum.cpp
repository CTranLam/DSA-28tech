#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int three_sum(int a[] ,int n ,int target){
	for(int i=0 ; i<n ; i++){
		int j=i+1,k=n-1;
		while(j<k){
			int sum=a[i]+a[j]+a[k];
			if(sum==target) return 1;
			else if(sum>target) --k;
			else ++j;
		}
	}
	return 0;
}
int main(){
	int n,k;
	cin >> n >> k;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	sort(a,a+n);
	if(three_sum(a,n,k)) cout << "YES" << endl;
	else cout << "NO" <<endl;
}
