#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	set<int> se;
	for(int i=1 ; i<=n ; i++){
		int x; cin >> x;
		se.insert(x);
	}
	int a[10005];
	int i=1;
	for(auto it = se.rbegin() ; it != se.rend() ; it++){
		a[i]=*it;
		++i;
	}
	int t=i-1;
	do{
		vector<int> v;
		for(int i=1 ; i<=t ; i++){
			v.push_back(a[i]);
		}
		for(int x : v){
			cout << x <<" ";
		}
		cout << endl;
	}while(prev_permutation(a+1,a+t+1));
}
