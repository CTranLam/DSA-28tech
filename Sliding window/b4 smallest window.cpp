#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int kt(string s){
	set<int> se;
	for(int i=0 ; i<s.size() ; i++){
		se.insert(s[i]);
	}
	return se.size();
}
int main(){
	string s; cin >> s;
	int n=s.size();
	int target=kt(s); // so ki tu khac nhau
	map<char,int> mp; // dem tan suat ki tu [l,r]
	int min_len=INT_MAX;
	int cnt=0,l=0;
	for(int r=0 ; r<n ; r++){
		mp[s[r]]++;
		if(mp[s[r]]==1){ // xuat hien lan dau thi tang cnt
			cnt++;
		}
		if(cnt == target){
			// rut ngan chieu dai
			while(true){
				// neu tru s[l] lam giam cnt thi break
				if(mp[s[l]]==1) break;
				else mp[s[l]]--;
				l++;
			}
			min_len=min(min_len,r-l+1);// cap nhat len khi rut ngan chieu dai
		}
	}
	if(min_len==INT_MAX) cout <<-1 <<endl;
	else cout << min_len <<endl;
}
