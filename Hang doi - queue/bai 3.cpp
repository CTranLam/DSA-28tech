#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	deque<int> dq;// hang doi 2 dau
	while(t--){
		string s; cin >> s;
		if(s=="PUSHFRONT"){ // them vao dau hang doi
			int x; cin >> x;
			dq.push_front(x);
		}
		else if(s=="PUSHBACK"){// them vao cuoi hang doi
			int x; cin >> x;
			dq.push_back(x);
		}
		else if(s=="POPFRONT"){
			if(!dq.empty()){
				dq.pop_front();
			}
		}
		else if(s=="POPBACK"){
			if(!dq.empty()){
				dq.pop_back();
			}
		}
		else if(s=="PRINTFRONT"){
			if(dq.empty()) cout <<"NONE" << endl;
			else cout << dq.front() << endl;
		}
		else{
			if(dq.empty()) cout << "NONE" << endl;
			else cout << dq.back() << endl;
		}
	}
}
