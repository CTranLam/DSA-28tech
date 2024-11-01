#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	int ans=1;
	int a[n+1][n+1];
	int c1=1,c2=n,h1=1,h2=n;
	while(h1<=h2 && c1<=c2){
		for(int i=c1 ; i<=c2 ; i++){
			a[h1][i]=ans;
			++ans;
		}
		h1++;
		for(int i=h1; i<=h2 ; i++){
			a[i][c2]=ans;
			++ans;
		}
		c2--;
		for(int i=c2 ; i>=c1 ; i--){
			a[h2][i]=ans;
			++ans;
		}
		--h2;
		for(int i=h2 ; i>=h1 ; i--){
			a[i][c1]=ans;
			++ans;
		}
		++c1;
	}
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=n ; j++){
			cout << a[i][j] <<" ";
		}
		cout << endl;
	}
}
