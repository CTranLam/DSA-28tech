#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void printmax(int a[] ,int n, int k){
	std::deque<int> qi(k);
	for(int i=0 ; i<k ; i++){
		while(!qi.empty() && a[i] >= a[qi.back()]){ // chi luu chi so cua so lon nhat
			qi.pop_back();
		}
		qi.push_back(i);
	}
	for(int i=k ; i< n ; i++){
		cout << a[qi.front()] <<endl;
		while(!qi.empty() && qi.front() <= i-k){ // xoa cac ptu ngoai cua so
			qi.pop_front();
		}
		while(!qi.empty() && a[i] >=a[qi.back()]){
			qi.pop_back();
		}
		qi.push_back(i);
	}
	cout << a[qi.front()] << endl;
}
int main(){
	int n,k;
	cin >> n >> k;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	printmax(a,n,k);
}
