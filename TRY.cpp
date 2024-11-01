#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;
int n;
vector<string> ans;
bool tn(string x){
	if(x.empty()) return 0;
	string rx=x;
	reverse(rx.begin(),rx.end());
	return rx==x;
}
void Try(int i,string x,vector<string> v){
	if(i==n+1){
		int cnt=0;
		for(string tmp : v){
			cnt+=tmp.size();
		}
		if(cnt==n){
			string res="";
			for(string tmp : v){
				res+=tmp+" ";
			}
			ans.push_back(res);
		}
		return;
	}
	Try(i+1,x+s[i] ,v);
	// tach so moi khi da tim duoc so tn
	if(tn(x)){
		string t="";
		v.push_back(x);
		Try(i+1,t+s[i] ,v);
		v.pop_back();
	}
}
//282882
//2 8 2 8 8 2
//2 8 2 88 2
//2 8 2882
//2 828 8 2
//282 8 8 2
//282 88 2
int main(){
	cin >> s;
	n=s.size();
	Try(0,"",{});
	sort(ans.begin(),ans.end());
	for(string x : ans){
		cout << x<<endl;
	}
}
