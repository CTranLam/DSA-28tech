#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,a[25];
int target; // tong muc tieu
int cur=0; // tong hien tai
int cnt=0;
int used[25];
bool ok=0;
map<int,int> mp;
void Try(int i){
	if(cnt==2){
		ok=1;
		return;
	}
	for(int j=i ; j<=n ; j++){
		if(mp[j]==0 && cur < target){
			mp[j]=1;
			cur+=a[j];
			if(cur==target){
				++cnt;
			}
			else if(cur<target){
				Try(j);
			}
			mp[j]=0;
			cur-=a[j];
		}
	}
}
int main(){
	cin >> n;
	for(int i=1 ; i<=n ; i++){
		cin >> a[i];
	}
	int sum=accumulate(a+1,a+n+1,0);
	if(sum%2 !=0 || n==1 ){
		cout << 0 ;
		return 0;
	}
	target=sum/2;
	Try(1);
	cout << ok << endl;
}
