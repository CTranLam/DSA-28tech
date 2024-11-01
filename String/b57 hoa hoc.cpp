#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s;int n;
	map<string,int> mp;
	for(int i=0 ; i<10 ; i++){
		cin >> s >> n;
		mp[s]=n;
	}
	int t;cin >> t;
	while(t--){
		vector<string> so,chu;
	    string cs="";
	    string cc="";
		ll sum=0;
		string ss ; cin >> ss;
		for(char x : ss){
			if(isalpha(x)){
				if(cs!= "") so.push_back(cs);
				cs="";
				cc+=x;
			}
			else{
				if(cc!="") chu.push_back(cc);
				cc="";
				cs+=x;
			}
		}
		if(cs != "") so.push_back(cs);
		for(int i=0 ; i<chu.size(); i++){
			sum+=mp[chu[i]] * stoi(so[i]);
		}
		cout << sum <<endl;
	}
}
