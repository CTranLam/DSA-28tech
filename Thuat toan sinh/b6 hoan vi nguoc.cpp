#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	int a[n+5];
	for(int i=1 ; i<=n ; i++){
		a[i]=i;
	}
	vector<int> v;
	do{
		int ans=0;
		for(int i=1 ; i<=n ; i++){
			ans=ans*10+a[i];
		}
		v.push_back(ans);
	}while(next_permutation(a+1,a+n+1));
	sort(v.begin(),v.end(),greater<int>());
	for(int x : v){
		cout << x << endl;
	}
}
