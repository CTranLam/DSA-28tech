#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;
char a[1005];
int main(){
	cin >> s;
	set<char> se;
	for(char x : s){
		se.insert(x);
	}
	int i=1;
	for(char x : se){
		a[i]=x;
		++i;
	}
	int n=i-1;
	do{
		for(int j=1; j<=n ; j++){
			cout << a[j];
		}
		cout << endl;
	}while(next_permutation(a+1,a+n+1));
}
