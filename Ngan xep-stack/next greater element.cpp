#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	int a[n];
	vector<int> ans;
	for(int &x : a) cin >> x;
	stack<int> st;
	for(int i=0 ; i<n ; i++){
		if(st.empty()){
			// them vao hang doi
			st.push(i);
		}
		else{
			//gap phan tu thoa man thi cac phan tu trong hang doi se dc pop ra ngoai
			while(!st.empty() && a[st.top()] < a[i]){
				ans.push_back(a[i]);
				st.pop();
			}
			st.push(i);
		}
	}
	while(!st.empty()){
		ans.push_back(-1);
		st.pop();
	}
	for(int x : ans){
		cout << x <<" ";
	}
}
