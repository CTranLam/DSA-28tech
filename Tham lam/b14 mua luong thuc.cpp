#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,m,s;
	cin >> n >> s >> m;
	if(n<m || (s-s/7)*n <s*m){ // tru di nhung ngay chu nhat
		cout << -1 << endl;
	}
	else{
		for(int i=1 ; i<=s ; i++){
			if(n*i >= s*m){
				cout << i << endl;
				break;
			}
		}
	}
}
