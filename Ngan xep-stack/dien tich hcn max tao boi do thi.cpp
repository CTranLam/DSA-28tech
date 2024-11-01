#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	stack<int> st;
	int res=INT_MIN;
	int i=0;
	while(i<n){
		if(st.empty() || a[i] >= a[st.top()]){
			// trong stack se la chi so cua cac cot tang dan
			st.push(i);
			++i;
		}
		else{// a[i] hien tai nho hon a[st.top()]
		    int idx=st.top();
			st.pop();
			// tinh toan hcn tao boi cot hien tai trong do cot hien tai la cot ngan nhat
			if(st.empty()){
				// xoa di thi stack rong 
				res=max(res,i*a[idx]);
			}   
			else{
				res=max(res,a[idx]*(i-st.top()-1));
			}
		}
	}
	while(st.empty()){
		int idx=st.top();
		st.pop();
		// tinh toan hcn tao boi cot hien tai trong do cot hien tai la cot ngan nhat
		if(st.empty()){
		// xoa di thi stack rong 
		res=max(res,i*a[idx]);
		}   
		else{
			res=max(res,a[idx]*(i-st.top()-1));
		}
	}
	cout << res << endl;
}
