#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int bfs(int s,int t){// tim kiem theo chieu ngang
	queue<pair<int,int>> q;
	set<int> used;
	used.insert(s);
	q.push({s,0});// luu trang thai va so thao tac
	while(!q.empty()){
		pair<int,int> u=q.front();
		q.pop();
		if(u.first==t) return u.second;
		int num=u.first;
		if(num-1> 1 && !used.count(num-1)){
			q.push({num-1,u.second+1});
			used.insert(num-1);
		}
		if(num<t && !used.count(num*2)){
			q.push({num*2,u.second+1});
			used.insert(num*2);
		}
	}
	return -1;
}
int main(){
	int t; cin >> t;
	while(t--){
		int S,T;
		cin >> S >> T;
		cout << bfs(S,T) << endl;
	}
}
