#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,k,s;
int cnt=0;
int dem=0;
void Try(int i,int sum){
	if(cnt==k){
		if(sum==s){
			++dem;
		}
	}
	else{
	    for(int j=i ; j<=n ; j++){
		    ++cnt;
		    sum+=j;
		    Try(j+1,sum);
		    cnt--;
		    sum-=j;
		}
	}
}
int main(){
	cin >> n >> k >> s;
	Try(1,0);
	cout << dem << endl;
}
