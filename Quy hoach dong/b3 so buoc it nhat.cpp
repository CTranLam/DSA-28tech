#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	int a[n+1],f[n+1];
	for(int i=1 ; i<=n ; i++){
		cin >> a[i];
	}
	int res=1;
	// tim so buoc toi thieu de tao thanh day con tang dan
	// chon ra day con tang dai nhat -> so buoc min=n-chieu dai day con do
	for(int i=1 ; i<=n ; i++){
		f[i]=1;
		for(int j=1 ; j<=i-1; j++){
			if(a[i]>a[j]){ // dau bai co van de do lay dau bang thi bi sai 
				f[i]=max(f[i],f[j]+1);
			}
		}
		res=max(res,f[i]);
	}
	cout << n-res << endl;
}
