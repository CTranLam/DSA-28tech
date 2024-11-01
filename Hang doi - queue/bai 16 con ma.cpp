#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int dx[8]={-2,-2,-1,-1,1,1,2,2};
int dy[8]={-1,1,-2,2,-2,2,-1,1};
void change(string &s){
		if(s[0]=='a') s[0]='1';
		else if(s[0]=='b') s[0]='2';
		else if(s[0]=='c') s[0]='3';
		else if(s[0]=='d') s[0]='4';
		else if(s[0]=='e') s[0]='5';
		else if(s[0]=='f') s[0]='6';
		else if(s[0]=='g') s[0]='7';
		else s[0]='8';
}
int main(){
	int t; cin >> t;
	while(t--){
		string s,t; cin >> s >> t;
		change(s);change(t);
		//cout << s <<" "<<t << endl;
		int tmp1=stoi(s),tmp2=stoi(t);
		int s2=tmp1%10,s1=tmp1/10;
		int t2=tmp2%10,t1=tmp2/10;
		//cout << s1 << " "<<s2<<" "<<t1<<" "<<t2<< endl;
		int visited[505][505]={0};
		int parent[505][505]={0};
		// sd bfs
		queue<pair<pair<int,int>,int>> q;
		q.push({{s1,s2},0});
		visited[s1][s2]=1;
		while(!q.empty()){
			auto it=q.front();q.pop();
			int i=it.first.first,j=it.first.second;
			int cnt=it.second;
			if(i==t1 && j==t2){
				cout << cnt << endl;
				break;
			}
			for(int k=0 ; k<8 ; k++){
				int i1=i+dx[k];
				int j1=j+dy[k];
				if(i1>=1 && i1<=8 && j1>=1 && j1<=8 && visited[i1][j1]==0){
					q.push({{i1,j1},cnt+1});
					visited[i1][j1]=1;
				}
			}
		}
	}
}
