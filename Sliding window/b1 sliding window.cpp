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
	ll sum=0;
	for(int i=0 ; i<k ; i++){// sum cua cua so dau tien
		sum+=a[i];
	}
	int start=0;
	ll max_sum=sum;
	for(int i=k ; i<n ; i++){
		sum=sum+a[i]-a[i-k];
		if(sum>max_sum){
			max_sum=sum;
			start=i-k+1;
		}
	}
	cout << max_sum << endl;
	for(int i=start ; i<start+k ; i++){
		cout << a[i] <<" ";
	}
}
