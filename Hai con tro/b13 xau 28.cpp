#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s;
	cin >> s;
	int x,y;
	cin >> x >> y;
	int max_len=0;
	int l=0;
	int dem2=0,dem8=0;
	for(int r=0 ; r<s.size() ; r++){
		if(s[r]=='2') ++dem2;
		else ++dem8;
		while(dem2 > x || dem8 > y){
			if(s[l]=='2') --dem2;
			else --dem8;
			++l;
		}
		max_len=max(r-l+1,max_len);
	}
	cout << max_len <<endl;
}
