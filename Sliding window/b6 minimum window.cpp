#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s,t;
	cin >> s >> t;
	map<char,int> mps;
	map<char,int> mpt;
	for(int i=0 ; i<t.size() ; i++){
		mpt[t[i]]++;
	}
	int l=0;
	int cnt=0; // so ki tu cua t trong s;
	int min_len=1e9;
	int st=0;
	for(int r=0 ;r<s.size() ; r++){
		mps[s[r]]++;
		if(mps[s[r]] <= mpt[s[r]]) ++cnt;
		if(cnt==t.size()){
			while(mps[s[l]] > mpt[s[l]] || mpt[s[l]]==0){
				mps[s[l]]--;
				++l;
			}
			int cur_len=r-l+1;
			if(cur_len<min_len){
				min_len=cur_len;
				st=l;
			}
		}
	}
	if(min_len==1e9) cout <<-1 <<"\n";
	else{
		for(int i=st ; i<=st+min_len-1 ; i++){
			cout  << s[i];
		}
	}
}

