#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s;
	cin >> s;
	int k; cin >> k;
	stack<pair<char,int>> st;
	st.push({s[0],1});
	for(int i=1 ; i<s.size() ; i++){
		if(!st.empty()){
			if(s[i]==st.top().first){
				auto it=st.top();
				it.second++;
				st.pop();
				if(it.second < k ) st.push({s[i],it.second});
			}
			else{
				st.push({s[i],1});
			}
		}
		else{
			st.push({s[i],1});
		}
	}
	//cout << st.size() << endl;
	if(st.size()==0){
		cout << "EMPTY" << endl;
		return 0;
	}
	vector<char> v;
	while(!st.empty()){
		while(st.top().second != 0){
			v.push_back(st.top().first);
			st.top().second--;
		}
		st.pop();
	}
	reverse(v.begin(),v.end());
	for(char x : v){
		cout << x;
	}
}
