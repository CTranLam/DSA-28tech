#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	char a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i] ;
	}
	sort(a,a+n);
	for(char x : a){
		cout << x <<" ";
	}
	cout << endl;
	sort(a,a+n,greater<char>());
	for(char x : a){
		cout << x << " ";
	}
}
