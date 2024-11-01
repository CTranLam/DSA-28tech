#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll a,b;
	cin >> a >> b;
	int x=sqrt(a);
	int y=sqrt(b);
	if((ll)x*x != a) x++;
	int ans=0;
	for(int i=x ; i<=y ; i++){
		ans++;
	}
	cout << ans << endl;
}
