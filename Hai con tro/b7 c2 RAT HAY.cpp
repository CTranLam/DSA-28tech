#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,s; cin >> n >> s;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	ll sum=0;
	ll cnt=0;
	int l=0;
	for(int r=0 ; r<n ; r++){
		sum+=a[r];
		// tim mang thoa man ngan nhat
		if(sum >= s){
			//rut ngan chieu dai
			while(true){
				if(sum-a[l] < s) break;
				sum-=a[l];
				l++;
			}
			cnt+=l-0+1;
		}
		// tu l ve 0 la mang con sum >= s
	}
	cout << cnt <<endl;
}
