#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> v;
void check(int n){
	for(int i=2 ; i<=sqrt(n) ; i++){
		if(n%i==0){
			while(n%i==0){
				v.push_back(i);
				n/=i;
			}
		}
	}
	if(n>1) v.push_back(n);
}
int main(){
	int n; cin >> n;
	check(n);
	set<int> se;
	for(int x : v){
		se.insert(x);
	}
	if(se.size()>=3){
		cout << "YES" << endl;
		return 0;
	}
	if(v.size() == 4 && se.size() == 2){
		cout << "YES" << endl;
		return 0;
	}
	if(v.size()>4){
		cout << "YES" << endl;
	}
	else{
		cout <<"NO" << endl;
	}
}
