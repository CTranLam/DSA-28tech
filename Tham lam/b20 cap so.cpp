#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int d[1000005];
int main(){
	int n;cin >> n;
	int a[n];
	vector<int> chan;
	for(int &x : a){
		cin >> x;
		if(x%2==0) chan.push_back(x);
		d[x]++;
	}
	if(chan.size() %2 == 0) cout << "YES";
	else{ // so luong so chan le va so luong so le la le
		for(int x : chan){ // chu dong tim 1 cap chan le thoa man
			// neu ton tai d[x-1] || d[x+1] thi co abs(x-y)=1
			if(d[x-1] !=0 || d[x+1] !=0){
				cout <<"YES" << endl;
				return 0;
			}
		}
		cout <<"NO";
	}
}
