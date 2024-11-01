#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,m;
	cin >> n >> m;
	int a[n],b[m];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	for(int i=0 ; i<m ; i++){
		cin >> b[i];
	}
	int i=0 ,j=0;
	ll cnt=0;
	// dung 2 con tro do phuc tap se nho hon dung lower_bound && upper_bound
	while(i < n && j<m){
		if(a[i]==b[j]){ // 2 phan tu bang nhau dau tien trong 2 day
			int x=a[i];
			int d1=0,d2=0;
			while(i<n && a[i]==x){ // chay het tren mang a
				d1++;
				i++;
			}
			while(j<m && b[j]==x){ // chay het tren mang b
				d2++;
				++j;
			}
			cnt+=1ll*d1*d2;
		}
		else if(a[i] < b[j]) ++i;
		else ++j;
	}
	cout << cnt << endl;
}
