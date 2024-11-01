#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int prime[20005];
void sang(){
	prime[0]=prime[1]=1;
	for(int i=2 ; i<=sqrt(10000) ; i++){
		if(prime[i]==0){
			for(int j=i*i ; j<=10000 ; j+=i){
				prime[j]=1;
			}
		}
	}
}
void sovle(){
	int s,t; cin >> s >> t;
	queue<pair<int,int>> q;
	q.push({s,0});
	int used[20005]={0};
	used[s]=1;
	while(!q.empty()){
		auto u=q.front(); q.pop();
		if(u.first==t){
			cout << u.second << endl;
			return;
		}
		string res=to_string(u.first);
		for(int i=0 ; i<res.size() ; i++){
			char st;
			if(i==0) st='1';
			else st='0';
			for(char j=st ; j<='9' ; j++){
				string tmp=res;
				tmp[i]=j; // gan tung vi tri voi cac ki tu moi
				// la so nto va chua duoc sd
				if(!prime[stoi(tmp)] && !used[stoi(tmp)]){
					q.push({stoi(tmp),u.second+1});
					used[stoi(tmp)]=1;
				}
			}
		}
	}
}
int main(){
	sang();
	int t; cin >> t;
	while(t--){
		sovle();
	}
}
