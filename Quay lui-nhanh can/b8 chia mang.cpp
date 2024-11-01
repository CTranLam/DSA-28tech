#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=22;
int a[1000];
int n,k,cnt=0;
int cur;// tong hien tai
int tar; // tong muc tieu
bool ok=0;
map<int,int> mp;
void Try(int i){
	if(cnt==k){
		ok=1;
		return;
	}
	for(int j=1 ; j<=n ; j++){
		if(mp[j]==0 && cur<tar){
			cur+=a[j];
			mp[j]=1;
			if(cur==tar){
				++cnt;
			}
			else if(cur<tar){
				Try(i+1);
			}
			cur-=a[j];
			mp[j]=0;
		}
	}
}
int main(){
	cin >> n >> k;
	for(int i=1 ; i<=n ; i++){
		cin >> a[i];
	}
	int sum=accumulate(a+1,a+n+1,0);
	if(sum%k != 0){
		cout << 0 << endl;
		return 0;
	}
	tar=sum/k;
	sort(a+1,a+n+1);
	Try(1);
	cout << ok << endl;
}
