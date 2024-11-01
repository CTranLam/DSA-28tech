#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,s;
int a[50];
int min_res=INT_MAX;
void Try(int pos,int sum,int cnt){
	if(sum==s){
		min_res=min(min_res,cnt);
	}
	if(cnt >= min_res) return;
	else if(sum < s){
		for(int i=pos ; i<n ; i++){
			sum+=a[i];
			Try(i+1,sum,cnt+1);
			sum-=a[i];
		}
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >>s;
	int minn=INT_MAX;
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
		minn=min(minn,a[i]);
	} 
	if(minn > s){
		cout << -1 << endl;
		return 0;
	}
	else{
		Try(0,0,0);
		if(min_res==INT_MAX) cout << -1 << endl;
		else cout << min_res<<endl;
	}
}
