#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s;
		cin >> s;
		int dem8=0,dem24=0;
		for(int i=0 ; i<s.size(); i++){
			string p="";
			int sum8=0,sum24=0;
			for(int j=i ; j<s.size() ; j++){
				p+=s[j];
				sum8=sum8*10+p[p.size()-1]-'0';
				sum24=sum24*10+p[p.size()-1]-'0';
				sum8%=8;
				sum24%=24;
			    if(sum8==0)++dem8;
			    if(sum24==0)++dem24;
			}
		}
		cout << dem8-dem24 <<endl;
	}
}
