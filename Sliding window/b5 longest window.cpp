#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s;cin >> s;
	map<char,int> mp;
	int l=0,max_len=0;
	for(int r=0 ; r<s.size() ; r++){
		mp[s[r]]++;
		if(mp[s[r]]==2){
			max_len=max(max_len,r-l);
			while(mp[s[r]]==2){ // dich l len de thoa man khac nhau
				mp[s[l]]--;
				++l;
			}
		}
	}
	cout << max_len << endl;
}
