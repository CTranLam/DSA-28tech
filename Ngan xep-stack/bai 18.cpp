#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void lon_hon_ben_phai(int a[],int f[],int n){
	stack<int> st;
	for(int i=0 ; i<n ; i++){
		while(!st.empty() && a[i] > a[st.top()]){
			f[st.top()]=i;
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty()){
		f[st.top()]=-1;
		st.pop();
	}
}
int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	int f[n],g[n];
	lon_hon_ben_phai(a,f,n);
	stack<int> st;
	for(int i=0 ; i<n ; i++){
		while(!st.empty() && a[i] < a[st.top()]){
			g[st.top()]=a[i];
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty()){
		g[st.top()]=-1;
		st.pop();
	}
	for(int i=0 ; i<n ; i++){
		if(f[i]==-1){
			cout << -1 <<" ";
		}
		else{
			cout << g[f[i]] <<" ";
		}
	}
}
