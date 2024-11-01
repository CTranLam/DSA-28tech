#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void ktao(int s,int k){
	--s;--k;
	string t="";
	while(s > 9){
		t+="9";
		s-=9;
		k--;
	}
	if(s != 0 && k !=0){
		t=to_string(s)+t;
		--k;
		s=0;
	}
	while(k>0){
		t="0"+t;
		--k;
	}
	s+=1;
	t=to_string(s)+t;
	cout << t << endl;
}
int main(){
	int s,k;
	cin >> s >>k;
	if(k*9<s || (k !=1 && s==0)){
		cout << -1 << endl;
		return 0;
	}
	ktao(s,k);
}
