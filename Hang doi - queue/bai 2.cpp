#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	queue<int> q;
	int t;
	cin >> t;
	while(t--){
		string s; cin >> s;
		if(s=="PUSH"){
			int x; cin >> x;
			q.push(x);
		}
		else if(s=="PRINTFRONT"){
			if(q.empty()) cout <<"NONE" << endl;
			else cout << q.front() << endl;
		}
		else{
			if(!q.empty()) q.pop();
		}
	}
}
