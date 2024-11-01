#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	queue<int> q;
	int t; cin >> t;
	while(t--){
		int x; cin >> x;
		if(x==1) cout << q.size() << endl;
		else if(x==2){
			if(q.empty()) cout <<"YES" << endl;
			else cout <<"NO" << endl;
		}
		else if(x==3){
			int n; cin >> n;
			q.push(n);
		}
		else if(x==4){
			if(!q.empty()){
				q.pop();
			}
		}
		else if(x==5){
			if(q.empty()) cout << -1 << endl;
			else cout << q.front() << endl;
		}
		else{
			if(q.empty()) cout << -1 << endl;
			else{
				vector<int> v;
				while(q.size() != 1){
					v.push_back(q.front());
					q.pop();
				}
				cout << q.front() << endl;
				v.push_back(q.front());
				q.pop();
				for(int x : v){
					q.push(x);
				}
			}
		}
	}
}
