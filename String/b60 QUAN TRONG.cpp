#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s; cin >> s;
	int n=s.size();
	s="*"+s;
	ll res=0;
	int cnt0=0,cnt1=0,cnt2=0;
	map<string,int> mp; // key map luu so lan xuat hien
	mp["0_0"]=1; // vi tri dau tien luon dung -> dem=1;
	for(int i=1; i<=n ; i++){
		if(s[i]=='2') ++cnt0;
		if(s[i]=='8') ++cnt1;
		if(s[i]=='t') ++cnt2;
		string key=to_string(cnt2-cnt1)+"_"+to_string(cnt1-cnt0);
		if(mp.count(key)) res+=mp[key];
		mp[key]++;
	}
	cout << res <<endl;
}
