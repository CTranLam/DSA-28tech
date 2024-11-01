#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	while(t--){
		int l,r;
		cin >> l >> r;
		queue<int> q;
		for(int x : {1,2,3,4,5}){
			q.push(x);
		}
		int cnt=0;
		while(!q.empty()){
			int u=q.front();q.pop();
			if(u>r) break;
			if(u>=l && u<=r){
				++cnt;
			}
			int used[100]={0};
			int tmp=u;
			while(tmp != 0){
				used[tmp%10]=1;
				tmp/=10;
			}
			for(int x : {0,1,2,3,4,5}){
				if(!used[x]){
					q.push(u*10+x);
				}
			}
		}
		cout<< cnt << endl;
	}
}
