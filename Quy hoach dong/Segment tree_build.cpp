#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=200005;
int a[maxn],t[4*maxn],n;
// t[v] luu tong phan tu tu chi so l den chi so r
void build (int v,int l ,int r){
	if(l==r){
		t[v]=a[l]; // neu no la node la
	}
	else{
		int m=(l+r)/2;
		build(2*v,l,m);
		build(2*v+1,m+1,r);
		t[v]=t[2*v]+t[2*v+1];
	}
}
int sum(int v,int tl, int tr , int l ,int r){
	// tim xem l r thuoc t[v] nao
	if(l==tl && r==tr){
		return t[v];
	}
	if(l>r) return 0; // k hop le
	else{
		int tm=(tl+tr)/2;
		return sum(2*v,tl,tm,l,min(tm,r))+sum(2*v+1,tm+1,r,max(l,tm+1),r);
	}
}
void update(int v,int l,int r,int pos,int val){
	if(l==r){
		t[v]=val;
	}
	else{
		int m=(l+r)/2;
		if(pos<=m){
			update(2*v,l,m,pos,val);
		}
		else{
			update(2*v+1,m+1,r,pos,val);
		}
		t[v]=t[2*v]+t[2*v+1];
	}
}
// 4
// 1 3 7 4

int main(){
	cin >> n;
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	build(1,0,n-1);
	for(int v=1 ; v<=20 ; v++){
		cout << t[v] << " "; // nhung node bi thieu se in ra 0
	}
	cout << endl;
	cout << sum(1,0,n-1,1,3) << endl;
	update(1,0,n-1,2,5);
	for(int v=1 ; v<=20 ; v++){
		cout << t[v] <<" ";
	}
}
