#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string s; int n;
vector<string> ans;
bool tn(string x){
	if(x.empty()) return 0;
	string rx=x;
	reverse(rx.begin() ,rx.end());
	return rx==x;
}
void solve(int i,string x , vector<string> cur){
	if(i==n+1){
		int cnt=0;
		for(auto z : cur){
			cnt+=z.size();
		}
		if(cnt==n){
			string res="";
			for(auto z : cur){
				res+=z+" ";
			}
			ans.push_back(res);
		}
		return;
	}
	// tiep tuc voi x
	solve(i+1,x+s[i] , cur);
	// tach tao so moi khi x da tn
	if(tn(x)){
		string t="";
		cur.push_back(x);
		solve(i+1,t+s[i],cur);
		cur.pop_back();
	}
}
int main(){
	cin >> s;
	n=s.size();
	solve(0,"",{});
	sort(ans.begin(),ans.end());
	for(auto x : ans){
		cout << x << endl;
	}
}
