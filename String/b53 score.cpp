#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
pair<string,string> tachdoi(string s){
	stringstream ss(s);
	string x;
	vector<string> v;
	while(getline(ss,x,'-')){
		v.push_back(x);
	}
	return {v[0] ,v[1]};
}
pair<string,int> tachban(string s,int loai){
	stringstream ss(s);
	string t;
	vector <string> v;
	while(ss >> t){
		v.push_back(t);
	}
	int banthang=0;
	string ten="";
	if(loai==0){
		banthang=stoi(v.back());
		for(int i=0 ; i<v.size()-1 ; i++){
			ten+=v[i]+" ";
		}
		ten.pop_back();
	}
	if(loai==1){
		banthang=stoi(v[0]);
		for(int i=1; i<v.size() ; i++){
			ten+=v[i] + " ";
		}
		ten.pop_back();
	}
	return{ten,banthang};
}
map<string,int> mp;
bool cmp(string a,string b){
	if(mp[a] != mp[b]) return mp[a] > mp[b];
	else return a<b;
}
int main(){
	string s;
	while(getline(cin,s)){
		pair<string,string> tmp=tachdoi(s);
		string doinha=tmp.first;
		string doikhach=tmp.second;
		pair<string,int> nha=tachban(doinha,0); // danh dau doi nha la 0
		pair<string,int> khach=tachban(doikhach,1); // doi khach la 1
		mp[nha.first]+=nha.second;
		mp[khach.first]+=khach.second;
	}	
	vector<string> v;
	for(auto x : mp){
		v.push_back(x.first);
	}
	sort(v.begin() , v.end() , cmp);
	for(string x : v){
		cout << x <<" "<<mp[x] << endl;
	}
}
