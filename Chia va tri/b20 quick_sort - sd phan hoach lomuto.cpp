#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int partition(int a[],int l,int r){
	int pivot=a[r];// chot
	int i=l-1;
	for(int j=l ; j<r ; j++){
		if(a[j] <= pivot){
			++i;
			swap(a[i],a[j]);
		}
	}
	i++;
	swap(a[i],a[r]);
	return i;
}
void quick_sort(int a[],int l,int r){
	if(l>=r) return;// mang con chi co 1 phan tu
	else{
		int p=partition(a,l,r); // vi tri ngan cach 2 mang
		quick_sort(a,l,p-1);
		quick_sort(a,p+1,r); // chia nho tiep cac nhanh
	}
}
int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	quick_sort(a,0,n-1);
	for(int x : a){
		cout << x <<" ";
	}
}
