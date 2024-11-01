#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int x;
bool cmp1(int a , int b){
	if(abs(a-x) != abs(b-x)) return abs(a-x) < abs(b-x);
	else return a<b;
}
bool cmp2(int a, int b){
	int r1=a%2;
	int r2=b%2;
	if(r1==0 && r2==0) return a < b;
	if(r1==1 && r2==1) return a > b;
	if(r1==0 && r2==1) return 1;
	else return 0;
}
int main(){
	int n ; cin >> n >> x;
	vector<int> v;
	for(int i=0 ; i<n ; i++){
		int t ; cin >> t;
		v.push_back(t);
	}
	sort(v.begin() , v.end() , cmp1);
	for(int x: v){
		cout << x <<" ";
	}
	cout << endl;
	sort(v.begin() , v.end() , cmp2);
	for(int x : v){
		cout << x << " ";
	}
}
