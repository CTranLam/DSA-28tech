#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n;
	cin >> n;
	int a[n+1][n+1];
	memset(a,0,sizeof(a));
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			if(j==0 || i==j){
				a[i][j]=1;
			}
			else{
				a[i][j]=a[i-1][j-1]+a[i-1][j];
			}
		}
	}
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<=i ; j++){
			cout << a[i][j] <<" ";
		}
		cout <<endl;
	}
}
