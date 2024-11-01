#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,a[25];
vector<string> ans;
vector<int> cur; // luu cac gia tri thoa man ung voi moi i
void Try(int i){
	if(i==n+1){ // dieu kien dung de quy
	    if(cur.size() >= 3){
		    string s="";
		    for(int j=1 ; j<cur.size() ; j++){
			    s+=to_string(cur[j])+" ";
		    }
		    cout << i <<" "<<s <<endl;
		    ans.push_back(s);
	    }
	    return;
	}
	if(a[i] > cur.back()){ // quay lui bat dau tu i=1
		cur.push_back(a[i]);
		Try(i+1);
		cur.pop_back();
	}
	Try(i+1); // chay khi no k vao dc if hoac khi Try ben tren ket thuc 
}
int main(){
	cin >> n;
	for(int i=1 ; i<=n ; i++){
		cin >> a[i];
	}
	cur.push_back(0); // them 1 gia tri vao lam cho de
	Try(1);
	sort(ans.begin(),ans.end());
	for(auto x : ans){
		cout << x << endl;
	}
}
