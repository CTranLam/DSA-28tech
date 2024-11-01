#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,m;
	cin >> n >> m;
	int a[n],b[m];
	multiset<int> ms;
	for(int i=0 ; i<n ; i++){
		cin >> a[i]; // gia ve
		ms.insert(a[i]);
	}
	for(int i=0 ; i<m ; i++){
		cin >> b[i]; // gia khach tra
		auto it=ms.upper_bound(b[i]);
		if(it == ms.begin()) cout << -1 << endl; // ptu lon hon dau tien la phan tu dau tien
		else{
			cout << *(--it) << endl;
			ms.erase(it);
		}
	}
}
