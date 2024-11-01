#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void traiphai(int a[],int n,int l){
	if(l==n) return;
	else{
		cout << a[l] <<" ";
		traiphai(a,n,l+1);
	}
}
void phaitrai(int a[],int n,int l){
	if(l==-1) return;
	else{
		cout << a[l] <<" ";
		phaitrai(a,n,l-1);
	}
}
int main(){
	ll n; cin >> n;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	traiphai(a,n,0);
	cout << endl;
	phaitrai(a,n,n-1);
}
