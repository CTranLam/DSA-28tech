#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n;cin >> n;
	map<string , vector<string>> mp;
	cin.ignore();
	while(n--){
		bool ok=false;
		string s; getline(cin,s);
		stringstream ss(s);
		string x;
		string res="", ans="";
		int check=0;
		vector<string> v;
		while(getline(ss,x,'-')){
			if(check==0){
				stringstream tt(x);
				string n;
				while( tt >> n){
					res+=n;
					res+=" ";
				}
				res.pop_back();
			}
			if(check==1){
				stringstream tt(x);
				string n;
				while( tt >> n){
					ans+=n;
					ans+=" ";
				}
				ans.pop_back();
			}
			check=1;
		}
		mp[res].push_back(ans); //  truy xuat vao value
		mp[ans].push_back(res);
	}
	for(auto it : mp){
		cout << it.first << " : ";
		vector<string> ans=it.second;
		sort(ans.begin() , ans.end());
		for(int i=0 ; i<ans.size()-1 ; i++){
			cout << ans[i] <<", ";
		}
		cout << ans.back() << endl;
	}
}


