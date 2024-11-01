#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int f[100];
string s; 
set<char> se;
int dem=0;
void check(){
	++dem;
	if(se.size()==1){
		if(dem%2==1) cout << 1 << endl;
		else cout << 2 << endl;
		return;
	}
	if(se.size() >1){
		int res=0; // so luong phan tu cua ki tu la chan hay le
		for(char x : se){
			if(f[x] %2==1) ++res;
		}
		if(res==0 || res==1){
			if(dem%2==1) cout << 1 << endl;
		    else cout << 2 << endl;
		    return;
		}
		else{
			for(char x : se){
				if(f[x] %2==1){
					se.erase(x);
					f[x]=0;
					break;
				}
			}
			check();
		}
	}
}
int main(){
	cin >> s;
	for(char x : s){
	    se.insert(x);
	    f[x]++;
	}
	check();
}
