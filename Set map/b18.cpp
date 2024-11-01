#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string x;
	set<string> se;
	while(cin>>x){
		se.insert(x);
	}
	cout << se.size() << endl;
	cout << *se.begin() <<" "<< *se.rbegin();
}
