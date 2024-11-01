#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vec;
vec xoaytrai(vec a){
	vec b(6);
	b[2]=a[2];
	b[5]=a[5];
	b[0]=a[3];
	b[1]=a[0];
	b[4]=a[1];
	b[3]=a[4];
	return b;
}
vec xoayphai(vec a){
	vec b(6);
	b[0]=a[0];
	b[3]=a[3];
	b[1]=a[4];
	b[2]=a[1];
	b[5]=a[2];
	b[4]=a[5];
	return b;
}
int bfs(vec s , vec t){
	queue<pair<vec,int>> q;
	q.push({s,0});// trang thai va so lan bien doi
	set<vec> se;
	se.insert(s);
	while(!q.empty()){
		pair<vec,int> p=q.front();
		q.pop();
		vec x=p.first;
		if(x==t) return p.second;
		vec trai=xoaytrai(x);
		if(se.count(trai)==0){
			se.insert(trai);
			q.push({trai,p.second+1});
		}
		vec phai=xoayphai(x);
		if(se.count(phai)==0){
			se.insert(phai);
			q.push({phai,p.second+1});
		}
	}
	return -1;
}
int main(){
	vec s(6),t(6);
	for(int i=0 ; i<6 ; i++){
		cin >> s[i];
	}
	for(int i=0 ; i<6 ; i++){
		cin >> t[i];
	}
	cout << bfs(s,t) << endl;
}
