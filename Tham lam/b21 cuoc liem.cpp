#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int a,b;
	cin >> a >> b;
	ll ans=0;
	while(true){
		if(a<1 || b<1) break;
		if(a==1 && b==1) break;
		if(b>=a){
			++ans;
			b-=2;
			a--;
		}
		else{
			++ans;
			b--;
			a-=2;
		}
	}
	cout << ans<< endl;
}
