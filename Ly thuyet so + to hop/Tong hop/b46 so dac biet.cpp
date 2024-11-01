#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
ll binpow(int a,int b){
	if(b==0) return 1;
	ll t=binpow(a,b/2);
	if(b%2==0) return (t%MOD*t%MOD)%MOD;
	else return (t%MOD *(t%MOD*a%MOD)%MOD)%MOD;
}
int main(){
	int n,k;cin >> n >>k;
	stack<int> st;
	while(k!=0){
		st.push(k%2);
		k/=2;
	}
	string s="";
	while(!st.empty()){
		s+=to_string(st.top());
		st.pop();
	}
	ll ans=0;
	string t=s;
	reverse(t.begin(),t.end());
	for(int i=0 ; i<t.size() ; i++){
		ans+=(t[i]-'0')*binpow(n,i);
		ans%=MOD;
	}
	cout << ans << endl;
}
