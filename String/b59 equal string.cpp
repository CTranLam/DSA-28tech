#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s;
	cin >> s;
	int n=s.size();
	s="*"+s;
	int dem1=0,dem0=0;
	int f[n+1]={0}; // mang so lg 1- so lg 0
	f[0]=0; // mac dinh so dau luon dung
	for(int i=1; i<=n ; i++){
		if(s[i]=='1') dem1++;
		else dem0++;
		f[i]=dem1-dem0;
	}
	int max_len=0;
	map<int,int> mp;
	mp[0]=0; // trong th ca day dung 
	for(int i=1 ; i<=n ; i++){
		if(mp.count(f[i])){// da co trong qua khu
			max_len=max(max_len,i-mp[f[i]]); // do dai max
		}
		else{
			mp[f[i]]=i; // vi tri dau tien
		}
	}
	cout << max_len;
}
