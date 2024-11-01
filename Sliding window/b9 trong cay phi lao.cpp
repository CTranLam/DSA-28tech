#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,k;
	cin >> n >> k;
	int a[n];
	int cur_sum=0;
	for(int i=0 ; i< n ; i++){
		cin >> a[i];
		cur_sum+=a[i];
	}
	if(cur_sum<k){
		cout << -1 << endl;
		return 0;
	}
	int cur_cnt=0;
	for(int i=0 ; i<k ; i++){ // tim mang con co tong lon nhat
		cur_cnt+=a[i];
	}
	int ans=cur_cnt;
	for(int i=k ; i<n ; i++){
		cur_cnt+=a[i];
		cur_cnt-=a[i-k];
		ans=max(ans,cur_cnt);
	}
	cout << k-ans << endl;
}
