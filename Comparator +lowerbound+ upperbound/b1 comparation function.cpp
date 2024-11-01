#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int demc(int a){
	int sl=0;
	while(a){
		if(a%10%2==0) ++sl;
		a/=10;
	}
	return sl;
}
int deml(int a){
	int sl=0;
	while(a){
		if(a%10%2==1) ++sl;
		a/=10;
	}
	return sl;
}
bool cmp1(int a, int b){
	if(demc(a) != demc(b)) return demc(a) < demc(b);
	else return a < b;
}
bool cmp2(int a,int b){
	return deml(a) < deml(b);
}
int main(){
	int n; cin >> n;
	vector<int> v1;
	vector<int> v2;
	for(int i=0 ; i<n ; i++){
		int x; cin >> x;
		v1.push_back(x);
		v2.push_back(x);
	}
	sort(v1.begin() , v1.end() , cmp1);
	for(int x : v1){
		cout << x <<" ";
	}
	cout << endl;
	stable_sort(v2.begin() , v2.end() , cmp2);
	for(int x : v2){
		cout << x <<" ";
	}
}
