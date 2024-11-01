#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t ; cin >> t;
	stack<int> st;
	while(t--){
		string s;
		cin >> s;
		if(s=="show"){
			if(st.empty()) cout << "EMPTY" << endl;
			else{
				vector<int> v;
				while(!st.empty()){
					v.push_back(st.top());
					st.pop();
				}
				reverse(v.begin(),v.end());
				for(int x : v){
					cout << x << " ";
					st.push(x);
				}
				cout << endl;
			}
		}
		if(s=="push"){
			int n; cin >> n;
			st.push(n);
		}
		if(s=="pop"){
			if(!st.empty()) st.pop();
		}
	}
}
