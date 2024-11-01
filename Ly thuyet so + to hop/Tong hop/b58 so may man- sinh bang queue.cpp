#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX=1e12;
vector<ll> v;
void make(){
	v.push_back(4);
    v.push_back(7);
    queue<ll> q;
    q.push(4);
    q.push(7);
	while(!q.empty()){
		ll x=q.front();q.pop();
		ll x2=x*10+4;
		if(x2<=MAX){
			v.push_back(x2);
			q.push(x2);
		}
		ll x3=x*10+7;
		if(x3<=MAX){
			v.push_back(x3);
			q.push(x3);
		}
	}
	sort(v.begin(),v.end());
}
int main(){
	ll n; cin >> n;
	make();
	for(int i=1 ; i<=sqrt(n) ; i++){
		if(n%i==0){
			if(binary_search(v.begin(),v.end(),i) || binary_search(v.begin(),v.end(),n/i)){
				cout <<"YES" << endl;
				return 0;
			}
		}
	}
	cout << "NO" <<endl;
}
