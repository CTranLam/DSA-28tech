#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> v;
void ptich(string s){
	int dem1=0;
	for(int i=0;i<s.size() ; i++){
		if(s[i]=='1'){
			++dem1;
		}
		else{
			if(dem1 !=0){
				v.push_back(dem1);
			}
			dem1=0;
		}
	}
	if(dem1 !=0) v.push_back(dem1);
}
int main(){
	string s;
	cin >> s;
	ptich(s);
	sort(v.begin(),v.end() , greater<int>());
	int dem=0;
	for(int i=0 ; i<v.size() ; i++){
		if(i%2==0) dem+=v[i];
	}
	cout << dem << endl;
}
