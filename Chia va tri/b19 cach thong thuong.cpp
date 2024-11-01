#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void merge(int a[],int l,int m,int r){ // tron tu l->r tang dan
	vector<int> vt,vp;
	for(int i=l ; i<=m ; i++) vt.push_back(a[i]);
	for(int i=m+1; i<=r ; i++) vp.push_back(a[i]); // 2 day tang dan
	int i=0,j=0;
	while(i<vt.size() && j<vp.size()){
		if(vt[i] <= vp[j]){
			a[l]=vt[i];
			l++;i++;
		}
		else{
			a[l]=vp[j];
			l++;
			j++;
		}
	}
	while(i<vt.size()){
		a[l]=vt[i];
		i++;l++;
	}
	while(j<vp.size()){
		a[l]=vp[j];
		++j;
		++l;
	}
}
void merge_sort(int a[],int l,int r){
	if(l>=r) return;// chi con 1 phan tu
	// chia doi den khi tat ca con 1 phan tu
	int m=(l+r)/2;
	merge_sort(a,l,m);
	merge_sort(a,m+1,r);
	// tat ca la 1 thi xep lai o moi nhanh de quy
	merge(a,l,m,r);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	merge_sort(a,0,n-1);
	for(int x : a) cout << x <<" ";
}
