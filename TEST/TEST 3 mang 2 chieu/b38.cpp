#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
int a[51][51];
int res;
void loang(int i,int j,int x ){
	res++;
	a[i][j]=-1000;
	int dx[8]={0,0,-1,-1,-1,1,1,1};
	int dy[8]={-1,1,0,-1 ,1,-1,0,1};
	for(int k=0 ; k<8 ; k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=0 && j1 >= 0 &&i1<n && j1 <m && a[i1][j1]==x){
			loang(i1,j1,x);
		}
	}
}
int main(){
	cin >> n >> m;
	set<int> se;
	for(int i=0 ; i<n ;i++){
		for(int j=0 ; j<m ; j++){
			cin >> a[i][j];
			se.insert(a[i][j]);
		}
	}
	vector<pair<int,vector<int>>> v;
	for(int x : se){
		vector<int> vp;
		for(int i=0 ; i<n ; i++){
			for(int j=0 ; j<m ; j++){
				if(a[i][j]==x){
					loang(i,j,x);
					vp.push_back(res);
					res=0;
				}
			}
		}
		v.push_back({x,vp});
	}
	for(auto x : v){
		int ans1=x.first;
		vector<int> ans2=x.second;
		sort(ans2.begin() , ans2.end());
		cout << ans1 <<" : ";
		for(int x : ans2){
			cout << x <<" ";
		}
		cout << endl;
	}
}
