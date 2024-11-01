#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,s;
	cin >> n >> s;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	int sum=0;
	int l=0;
	int min_len=1e9; 
	for(int r=0 ; r<n ; r++){
		sum+=a[r];
		if(sum>= s){
			// rut ngan chieu dai
			while(sum -a[l] >=s){ // luon duy tri sum doan [l,r] >= s
				sum-=a[l];
				++l;
			}
			min_len=min(min_len,r-l+1);
		}
	}
	if(min_len==1e9) cout << -1 << endl;
	else cout << min_len <<endl;
}
