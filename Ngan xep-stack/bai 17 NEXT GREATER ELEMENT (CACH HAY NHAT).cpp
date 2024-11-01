#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	int res[n];// luu kq
	stack<int> st;// luu chi so
	st.push(0);
	for(int i=1 ; i<n ; i++){
		if(a[i] <= a[st.top()]){
			st.push(i);
		}
		else{
			while(!st.empty() && a[i] > a[st.top()]){
				int j=st.top();
				st.pop();
				res[j]=a[i];
			}
			st.push(i);
		}
	}
	while(!st.empty()){
		res[st.top()]=-1;
		st.pop();
	}
	for(int i=0 ; i<n ; i++){
		cout << res[i] <<" ";
	}
}
