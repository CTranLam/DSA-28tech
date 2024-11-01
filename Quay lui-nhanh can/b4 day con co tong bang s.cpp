#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,k;
int a[1000];
vector<int> v;
void in(vector<int> v){
	cout << "[";
	for(int i=0 ; i<v.size()-1 ; i++){
		cout << v[i] <<" ";
	}
	cout << v[v.size()-1] << "]" << endl;
}
void Try(int i,int sum){
	if(sum==k){
		in(v);
	}
	else if(sum<k){
		for(int j=i ; j<=n ; j++){
			sum+=a[j];
			v.push_back(a[j]);
			Try(j+1,sum);
			sum-=a[j];
			v.pop_back();
		}
	}
}
int main(){
	cin >> n >> k;
	for(int i=1 ; i<=n ; i++){
		cin >> a[i];
	}
	sort(a+1,a+n+1);
	Try(1,0);
}
