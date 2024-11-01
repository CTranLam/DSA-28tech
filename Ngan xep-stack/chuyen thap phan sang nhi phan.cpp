#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	stack<int> st;
	while(n!=0){
		st.push(n%2);
		n/=2;
	}
	while(!st.empty()){
		cout << st.top() <<" ";
		st.pop();
	}
}
