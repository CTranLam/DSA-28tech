#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	int a[n];
	int dem1=0,dem2=0,dem3=0,dem4=0;
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
		if(a[i]==1) ++dem1;
		if(a[i]==2) ++dem2;
		if(a[i]==3) ++dem3;
		if(a[i]==4) ++dem4;
	}
	int ans=dem4;
	if(dem3 !=0){
		ans+=dem3;
		if(dem1>dem3){
			dem1-=dem3;
		}
		else dem1=0;
	}
	if(dem2 != 0){
		ans+=dem2/2;
		if(dem2 %2 !=0){
			dem2=1;
		}
		else dem2=0;
	}
	if(dem2 ==1){
		ans++;
		if(dem1 >2){
			dem1 -=2;
		}
		else dem1=0;
	}
	if(dem1 !=0){
		while(dem1 > 4){
			ans++;
			dem1-=4;
		}
		ans++;
	}
	cout << ans << endl;
}
