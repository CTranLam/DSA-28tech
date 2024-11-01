#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
vector<int> a[1001];
int visited[1001];
int main(){
	cin >> n;
	cin.ignore();
	for(int i=1 ; i<=n ; i++){
		string s,t;
		getline(cin,s);
		stringstream ss(s);
		while(ss>>t){
			a[i].push_back(stoi(t));
		}
	}
	for(int i=1 ; i<=n ; i++){
		for(int x : a[i]){
			if(i<=x) cout << i <<" "<<x <<endl;
		}
	}
}
