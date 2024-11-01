#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void somin(int n , int m){
	string minn="";
	m--;
	for(int i=0 ; i<n-1 ; i++){
		if(m>=9){
			minn="9"+minn;
			m-=9;
		}
		else{
			minn=to_string(m)+minn;
			m=0;
		}
	}
	m++;
	minn=to_string(m)+minn;
	cout << minn << endl;
}
void somax(int n,int m){
	string maxn="";
	for(int i=0 ; i<n ; i++){
		if(m>=9){
			maxn=maxn+"9";
			m-=9;
		}
		else{
			maxn=maxn+to_string(m);
			m=0;
		}
	}
	cout << maxn << endl;
}
int main(){
	int n,m; cin >> n >> m;
	if(n*9 < m || (n>1 && m==0)) cout << "NOT FOUND" << endl;
	else{
		somin(n,m);
		somax(n,m);
	}
}
