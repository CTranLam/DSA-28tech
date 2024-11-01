#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	int a[n];
	int dem0=0;
	for(int &x : a){
		cin >> x;
	}
	sort(a,a+n);
	auto it=upper_bound(a,a+n,0);
	dem0=it-a;
	cout << dem0 << endl;
}
