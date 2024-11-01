#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string ans="";
int used[2005];
int vitri(vector<int> truoc,vector<int> res){
	int dc=2005;
	for(int i=0 ; i<res.size() ; i++){
		int n=-1;
		for(int j=0 ; j<truoc.size() ; j++){
			if(truoc[j]==res[i]){
				n=j;
				break;
			}
		}
		dc=min(dc,n);
	}
	return dc;
}
void solve(vector<int> truoc,vector<int> giua,int pos){
	int root=pos;
	cout << root << endl;
	vector<int> s1,s2;
	for(int i=0 ; i<giua.size() ; i++){
		if(truoc[root] == giua[i]) break;
		else{
			s1.push_back(giua[i]);
		}
	}
	for(int i=giua.size()-1 ; i>=0 ; i--){
		if(truoc[root] == giua[i]) break;
		else{
			s2.push_back(giua[i]);
		}
	}
	reverse(s2.begin(),s2.end());
//	for(int x: s1){
//		cout << x <<" ";
//	}
//	cout << endl;
//	for(int x : s2){
//		cout << x <<" ";
//	}
//	cout << endl;
	if(s2.size() != 0 || s1.size() != 0){
		int pos1=vitri(truoc,s1);
		solve(truoc,s1,pos1);
//		int pos2=vitri(truoc,s2);
//		solve(truoc,s2,pos2);
	}
	else return;
}
int main(){
	int n; cin >> n;
	vector<int> truoc,giua;
	for(int i=0 ; i<n ; i++){
		int x; cin >> x;
		truoc.push_back(x);
	}
	for(int i=0 ; i<n ; i++){
		int x; cin >> x;
		giua.push_back(x);
	}
	solve(truoc,giua,0);
	cout << ans << endl;
}
